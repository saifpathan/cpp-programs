#include<stdio.h>
void myfun();
void main()
{
	myfun();
}
void myfun()
{
	int* ptr;
	ptr = new int[5];
	delete ptr;				//free jaise kaam krta h
}