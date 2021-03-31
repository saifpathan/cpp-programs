#include<stdio.h>
void main()
{
	int i;
	int*ptr;
	//ptr=(int*)malloc(sizeof(int)*5)			ye c me malloc k liye
	ptr = new int[5];							//ye c++ me dono line same h malloc k liye
	printf("\nEnter the values=");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &ptr[i]);
	}
	printf("\nValues entered are=");
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", ptr[i]);
	}
	printf("\n\n");

}