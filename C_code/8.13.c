/*冒泡法排序*/
#include<stdio.h>

int main()
{
    int i,j,k;
    int a[10];
    int iTemp;
	printf("*使用冒泡法排序*\n");
    printf("为数组元素赋值：\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]=",i);
		scanf("%d",&a[i]);
    }

    /*从小到大排序*/
    for(i=1;i<10;i++)
    {
        for(j=9;j>=i;j--)
		{
	    	if(a[j]<a[j-1])
	    	{
				iTemp=a[j-1];
				a[j-1]=a[j];
				a[j]=iTemp;
	    	}
		}
		printf("第%d次排序结果为：\n",i);
		for(k=0;k<10;k++)
		{
			printf("%d\t",a[k]);
		}
		printf("\n");
    }
    printf("使用冒泡法由小到大排序为：\n");
    for(i=0;i<10;i++)
    {
		printf("%d\t",a[i]);
		if(i==4)
        {
	    	printf("\n");
		}
    }
    printf("\n");
    return 0;
}
