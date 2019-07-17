#include<stdio.h>
main()
{
	int a[10],*p1,**p2,n=0;
	printf("please input:\n");
	for(p1=a;p1-a<10;p1++)
	{
		//printf("p1=%d\n,a=%d,p1-a=%d",p1,a,p1-a);
		p2=&p1;
		scanf("%d",*p2);
	}
	printf("the array is:");
	for(p1=a;p1-a<10;p1++)
	{
		p2=&p1;
		if(**p2%2==0)
		{
			printf("%5d",**p2);
			n++;
		}
	}
	printf("\n");
	printf("the number is:%d\n",n);
}
