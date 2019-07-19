/*使用指针实现冒泡排序,由小到大*/
#include<stdio.h>
void order(int *p,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	}
			printf("由小到大排序后的数组为:\n");
			for(i=0;i<n;i++)
			{
				printf("%5d",*(p+i));
			}
			printf("\n");
}

main()
{
	int a[20],i,n;
	printf("请输入数组元素的个数:\n");
	scanf("%d",&n);
	printf("请输入各个元素:\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	order(a,n);
}
