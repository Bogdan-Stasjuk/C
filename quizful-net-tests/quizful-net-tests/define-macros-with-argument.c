#include <stdio.h>

#define A(b) #b
#define B(b) "" #b "" "c"

int main(void)
{
	printf("%s", A("a"*"b"));
	printf("\n%s", B(a)B(B(a)));

	getchar();

	return 0;
}