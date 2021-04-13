#include<stdio.h>
void myfun(int&);
void main()
{
	int a = 10;
	myfun(a);
	printf("\nValue of a=%d\n\n", a);
}
void myfun(int& x)
{
	x = 30;
}