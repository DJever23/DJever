/*二维数组使用指针变量作函数参数，找出数组每行中最大的数，并将这些数相加求和*/
#include<stdio.h>
#define N 4
void max(int (*a)[N],int m)
{
	int value,i,j,sum=0;
	for(i=0;i<m;i++)
	{
		value=*(*(a+i));
		for(j=0;j<N;j++)
			if(*(*(a+i)+j)>value)
				value=*(*(a+i)+j);
		printf("第%d行的最大值是%d\n",i,value);
		sum=sum+value;
	}
	printf("\n");
	printf("每行中最大数相加之和为:%d\n",sum);
}

main()
{
	int a[3][N],i,j;
	int (*p)[N];               //p是个有N个指针变量的一维数组：  
	p=&a[0];                   //第1行的首地址赋给指针变量p
	printf("please input:\n");
	for(i=0;i<3;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	max(p,3);
}
