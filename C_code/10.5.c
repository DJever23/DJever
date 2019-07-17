/*使用指针变量作函数参数，调用自定义函数交换两变量值*/
#include<stdio.h>
void swap(int *a,int *b)
{
	printf("a=%d,b=%d,*a=%d,*b=%d\n",a,b,*a,*b);
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

main()
{
	int x,y;
	int *p_x,*p_y;
	printf("请输入两个数:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	p_x=&x;
	p_y=&y;
	printf("p_x=%d,p_y=%d\n",p_x,p_y);
	swap(p_x,p_y);
	printf("x=%d\n",x);
	printf("y=%d\n",y);
}
