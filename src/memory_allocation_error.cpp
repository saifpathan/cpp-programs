#include<stdio.h>
void main()
{
	int*ptr;
	ptr = new int[500];
	if (ptr == NULL)
	{
		printf("\nmemory allocation error");
	}
	else
	{
		for (int i = 0; i < 500; i++)
		{
			printf("\n%d", i);
		}
	}
	printf("\n\n");
}