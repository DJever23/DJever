#include<stdio.h>

int Min(a,b,c)
{
	int min;
	//m1=(a>b)?b:a;
	min=(a>b)?((b>c)?c:b):((a>c)?c:a);
//	printf("the min number is %d\n",min);
	return min;
}

int main()
{
	int x,y,z;
	printf("please input three numbers\n");
	scanf("%d%d%d",&x,&y,&z);
	//scanf("%d",&y);
	//scanf("%d",&z);
	printf("the min number is %d\n",Min(x,y,z));
	return 0;
}
	
