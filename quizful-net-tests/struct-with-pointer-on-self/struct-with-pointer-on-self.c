#include <stdio.h>
struct Node
{
	int i;
	struct Node* next; // 1
	struct Node* prev; // 2
} node; // 3

int main()
{
	node.i = 5; // 4
	node.next = NULL;
	node.prev = NULL;
	return 0;
}