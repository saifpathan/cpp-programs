#include<stdio.h>
void main()
{
	int a = 10;
	int& t = a;
	t = 20;
	printf("\nValue of a=%d\n\n", a);
}