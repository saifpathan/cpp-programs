#include<stdio.h>
void main()
{
	int a = 10;
	int& ref = a;
	ref = 30;
	printf("\nValue of a=%d\n\n", a);
}