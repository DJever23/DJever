#include<stdio.h>

void shownumber(int m,int n);

int main()
{
    int a,b;
    printf("请输入两个数字：\n");
    printf("num1=");
    scanf("%d",&a);
    printf("num2=");
    scanf("%d",&b);
    
    shownumber(a,b);
    return 0;
}

void shownumber(int m,int n)
{
   /*if(m>n)
      printf("较大的数是%d\n",m);
    else
      printf("较大的数是%d\n",n);
	*/
	int iTemp;
	iTemp=m>n?m:n;
	printf("最大的数是：%d\n",iTemp);
}
