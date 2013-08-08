#include <stdio.h>
const int a = 12;

//	2	IntelliSense: a value of type "const int *" cannot be used to initialize an entity of type "int *"	z:\Training\C\quizful-net-tests\const-pointer\const-pointer.c	4	11	const-pointer
//int * b = &a;       //1

//Error	1	error C2099: initializer is not a constant	z:\training\c\quizful-net-tests\const-pointer\const-pointer.c	4	1	const-pointer
//int c = a;          //2

int main() {
	//printf("%d %d %d", a, *b, c + *b);
	return 0;
}