#include<stdio.h>

int main()
{
	int iArray[5],index,temp;
	printf("please enter an Array:\n");

	for(index=0;index<5;index++)
	{
		scanf("%d",&iArray[index]);
	}

	printf("Original Array is:\n");
	for(index=0;index<5;index++)
	{
		printf("%d ",iArray[index]);
	}
	printf("\n");

	for(index=0;index<2;index++)
	{
		temp=iArray[index];
		iArray[index]=iArray[4-index];
		iArray[4-index]=temp;
	}
	printf("Now Array is:\n");

	for(index=0;index<5;index++)
	{
		printf("%d ",iArray[index]);
	}
	printf("\n");
	return 0;
}

