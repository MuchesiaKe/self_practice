#include <stdio.h>

/**
*main - printout values of predefined macros
*Return: 0 on success, non-zero on failure
**/

int main(void)
{
	printf("__FILE__: %s\n", __FILE__);
	printf("__LINE__: %d\n", __LINE__);
	printf("__DATE__:%s\n", __DATE__);
	printf("__TIME__: %s\n", __TIME__);
	printf("__STDC__: %d\n", __STDC__);
	//printf("__STDC_VERSION__: %d\n", __STDC_VERSION__);
	printf("__STDC_HOSTED__: %d\n", __STDC_HOSTED__);
	//printf("__cpluplus: %s\n", __cplusplus);
	//printf("__OBJC__: %d\n", __OBJ__);
	//printf("__ASSEMBLER__: %d\n", __ASSEMBLER__);
	return (0);
}
