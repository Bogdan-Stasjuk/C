#include <stdio.h>

struct MyStruct
{
	char y;
	int i;
} myStruct;

int main(void)
{
	//MyStruct myStruct;
	myStruct.i = 1;
	myStruct.y = 'a';

	printf("%d\n%c", myStruct.i, myStruct.y);

	getchar();

	return 0;
}