#include <stdio.h>
#include <assert.h>
#include "mylib.h"

int main(int argc, char const *argv[])
{
	char *str = NULL;

	assert(str == NULL);

	func(&str);

	assert(str != NULL);
	return 0;
}