/*利用指针对二维数组进行输入和输出*/
#include<stdio.h>
main()
{
	int a[3][5],i,j;
	printf("please input:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",a[i]+j);
		}
	}
	printf("the array is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%5d",*(a[i]+j));
		}
		printf("\n");
	}
}
