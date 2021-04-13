#include<stdio.h>
void myfun();
void main()
{
	int arr[5];
	myfun();
	myfun();
}
void myfun()
{
	int a = 10;
	a++;
	printf("\nValue of a=%d\n", a);
}