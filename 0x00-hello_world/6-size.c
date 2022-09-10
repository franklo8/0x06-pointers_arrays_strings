#include <stdio.h>

/**
 *main -is the entry point for the program.
 *
 *Return:zero if no error, Non-zero value  if errors.
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a long int is: %lu.\n", (unsigned long)sizeof(li));
	printf("The size of a long long int is: %lu.\n", (unsigned long)sizeof(lli));
	printf("The size of a float is: %lu.\n", (unsigned long)sizeof(f));
	fprintf(stderr, "[Anything]");
	return (0);

}
