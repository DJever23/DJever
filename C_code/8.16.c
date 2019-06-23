/*折半法排序*/
#include<stdio.h>

/*声明函数*/
void CelerityRun(int left,int right,int array[]);
int main()
{
	int i,j;
	int a[10];
	printf("*使用折半法排序*\n");
	printf("为数组元素赋值：\n");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	/*从小到大排序*/
	CelerityRun(0,9,a);

	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
		if(i==4)
			printf("\n");
	}
	printf("\n");
	return 0;
}

void CelerityRun(int left,int right,int array[])
{
	int i,j,k;
	int middle,iTemp;
	i=left;
	j=right;
	middle=array[(left+right)/2];
	do
	{
		while((array[i]<middle)&&(i<right))
			i++;
		while((array[j]>middle)&&(j>left))
			j--;
		if(i<=j)
		{
			iTemp=array[i];
			array[i]=array[j];
			array[j]=iTemp;
			i++;
			j--;
		}
	}while(i<=j);
	/*printf("第%d次排序为：\n",);
	for(k=0;k<10;k++)
	{
		printf("%d",array[k]);
	}*/

	/*递归左半边*/
	if(left<j)
		CelerityRun(left,j,array);
	/*递归右半边*/
	if(right>i)
		CelerityRun(i,right,array);
}


