#include<stdio.h>

void main()
{
	int a, b;
	
	printf("Enter numbers a and b\n");
	scanf("%d %d", &a, &b);
	
	if(a > b)
		printf("a: %d is bigger than b: %d\n", a, b);
	else
		printf("b: %d is bigger than a: %d\n", b, a);
}