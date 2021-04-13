#include<stdio.h>
void main()
{
	int*ptr;
	ptr = new int[5];
	for (int i = 0; i < 5; i++)
	{
		printf("\nEnter array values=");
		scanf("%d", &ptr[i]);
	}
	printf("\nValues entered are=");
	for (int i = 0; i < 5; i++)
	{
		printf("\t%d",ptr[i]);	
	}
	delete[]ptr;
	printf("\n\n");
}