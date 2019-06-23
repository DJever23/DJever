/*插入法排序*/
#include<stdio.h>

int main()
{
	int i,j,iPos;
	int a[10];
	int iTemp;
	printf("*使用插入法排序*\n");
	printf("为数组赋初值：\n");

	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	for(i=1;i<10;i++)
	{
		iTemp=a[i];
		iPos=i-1;
		while((iPos>=0)&&(iTemp<a[iPos]))
		{
			a[iPos+1]=a[iPos];
			iPos--;
		}
		a[iPos+1]=iTemp;
		printf("第%d次排序结果为：\n",i);
		for(j=0;j<10;j++)
		{
			printf("%d\t",a[j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}

