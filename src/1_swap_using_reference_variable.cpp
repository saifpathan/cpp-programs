#include<stdio.h>
void swap(int&, int&);
void main()
{
	int a = 56;
	int b = 79;
	printf("\nBefore swapping: \na=%d\tb=%d\n\n",a,b);

	swap(a, b);
	printf("\nAfter swapping: \na=%d\tb=%d", a, b);
	printf("\n\n");
}
void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}