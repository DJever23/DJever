#include<stdio.h>
#define Mix(a,b) (a*b+b)

main()
{
	int x,y;
	printf("please input two number:x,y\n");
	scanf("%d",&x);
//	scanf("%d",&y);
	y=3+4;
	printf("the mix number is %d\n",Mix(x,y));
	printf("5*Mix=%d\n",5*Mix(x,y));
}
