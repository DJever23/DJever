/*任意输入10个数据，先将这10个数据中是奇数的数据输出，再求这10个数据中所有奇数的和*/
#include<stdio.h>
void SUM(int *p,int n)
{
	int i,sum=0;
	printf("the odd:\n" );
	for(i=0;i<n;i++)
		if(*(p+i)%2!=0)
		{
			printf("%5d",*(p+i));
			sum=sum+*(p+i);
		}
	printf("\n");
	printf("sum is %d\n",sum);
}
main()
{
	int *pointer,a[10],i;
	pointer=a;
	printf("please input:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	SUM(pointer,10);
}

