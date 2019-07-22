/*将数组中的元素值按照相反顺序存放*/
#include<stdio.h>
main()
{
	int i,n;
	int a[20];
	int *p;
	printf("请输入数元素组的个数:\n");
	scanf("%d",&n);
	printf("请输入数组元素:\n");
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",p++);
	printf("倒序输出为:\n");
	p=&a[n-1];
	for(i=n-1;i>=0;i--)
		printf("%5d",*p--);
	printf("\n");
	return 0;
}
	
