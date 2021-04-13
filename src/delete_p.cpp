#include<stdio.h>
void main()
{
	int*p;
	p = new int(10);				//round bracket valuestore krta h
	printf("%d", *p);
	delete p;
	printf("\n\n");
}