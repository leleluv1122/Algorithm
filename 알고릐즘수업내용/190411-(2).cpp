#include "Stack.h"
#include <stdio.h>
int main()
{
	Stack A;
	printf("StackApp..\n");
	InitStack(A);

	Push(A, 100);
	Push(A, 200);
	Push(A, 300);

	printf("%d\n", Pop(A));
	printf("%d\n", Pop(A));
	printf("%d\n", Pop(A));
	UnInitStack(A);

	Stack B;
	InitStack(B, 1000);

	Push(B, 1122);
	printf("%d\n", Pop(B));
	UnInitStack(B);
}