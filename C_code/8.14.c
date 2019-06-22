/*交换法排序*/
#include<stdio.h>

int main()
{
    int i,j;
    int a[10];
    int iTemp;
    printf("为数组赋值：\n");
	for(i=0;i<10;i++)
	{
	    printf("a[%d]=",i);
	    scanf("%d",&a[i]);
	}

	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[j]<a[i])
				{
					iTemp=a[i];
					a[i]=a[j];
					a[j]=iTemp;
				}
		 }
	 }
	printf("用交换法由小到大排序为：\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
		if(i==4)
			printf("\n");
	}
	printf("\n");
	return 0;
}
					
		

