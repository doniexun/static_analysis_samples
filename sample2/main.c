#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 12

int func(char **str)
{
	*str = malloc(MAX_SIZE * sizeof(char));

	snprintf(*str, MAX_SIZE, "Hello world");

	return 0;
}

int main(int argc, char const *argv[])
{
	char *str = NULL;

	func(&str);

	printf("%s\n", str);	

	return 0;
}