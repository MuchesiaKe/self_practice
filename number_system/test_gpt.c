#include <stdlib.h>
#include <stdio.h>

/**
 * from_decimal - convert from decimal to specified base
 * @decimal_num: number to convert from decimal
 * @base: base to convert to
 * Return: equivalent value in specified base for the number
 **/
int *from_decimal(int decimal_num, int base)
{
    int i, quotient;
    int *rem;
    
    // Calculate the number of digits required to represent the result in the specified base
    int num_digits = 1;
    quotient = decimal_num;
    while (quotient /= base)
        num_digits++;
    
    // Allocate memory for the remainder array
    rem = malloc(num_digits * sizeof(*rem));
    if (rem == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL; // Return NULL to indicate an error
    }

    quotient = decimal_num;
    for (i = 0; quotient != 0; i++)
    {
        rem[i] = quotient % base;
        quotient = quotient / base;
    }

    // Print the result
    while (i >= 0)
    {
        printf("%d", rem[i]);
        i--;
    }
    printf("\n");

    return rem;
}

/**
 * main - controls program execution
 * Return: 0 on success, non-zero on failure
 **/
int main(void)
{
    int *result = from_decimal(327, 2);
    free(result); // Remember to free the memory allocated for the result array
    return 0;
}

