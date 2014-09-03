#include <stdio.h>

#include "mylib.h"



int main(int argc, char const *argv[])
{
	char *str = NULL;

	func(&str);

	printf("%s\n", str);	

	return 0;
}