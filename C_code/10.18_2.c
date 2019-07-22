/*当形参为数组时，实参也可以为指针变量*/
#include<stdio.h>
void order(int a[],int n)
{
	int i,temp,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(*(a+j)>*(a+j+1))
			{
				temp=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=temp;
			}
	printf("排序后的数组:\n");
	for(i=0;i<n;i++)
		printf("%5d",*(a+i));
	printf("\n");
}
main()
{
	int a[20],i,n;
	int *p;
	p=a;
	printf("请输入数组元素的个数:\n");
	scanf("%d",&n);
	printf("请输入各个元素:\n");
	for(i=0;i<n;i++)
		scanf("%d",p++);
	p=a;
	order(p,n);
}
