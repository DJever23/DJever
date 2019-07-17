#include<stdio.h>
void swap(int a,int b);

main()
{
	int x,y;
	printf("请输入两个数:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	swap(x,y);	
}

void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("x=%d\n",a);
	printf("y=%d\n",b);
}


