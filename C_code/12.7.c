/*循环左移*/
#include<stdio.h>

left(unsigned value,int n)
{
	unsigned z;
	z=(value>>(32-n))|(value<<n);
	return z;
}

main()
{
	unsigned a;
	int n;
	printf("please input a 8-in number:\n");
	scanf("%x",&a);
	printf("please input the number of displacement(>0):\n");
	scanf("%d",&n);
	printf("the result is:%x\n",left(a,n));
}
	
