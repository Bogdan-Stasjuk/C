#include <stdio.h>

enum en1 { 
	ELEM1_1, 
	ELEM1_2, 
	ELEM1_4 
};
enum en2 { 
	ELEM2_1, 
	ELEM2_2, 
	ELEM2_3, 
};
enum { 
	ELEM3_1, 
	ELEM3_2, 
	ELEM3_4 
} en3;
typedef enum { 
	ELEM4_1 = 1, 
	ELEM4_2, 
	ELEM4_4 
} en4;

int main(void)
{
	printf("%d\n%d\n%d\n%d\n%d", ELEM1_4, ELEM4_2, ELEM1_4, ELEM2_3, ELEM3_4);

	getchar();

	return 0;
}