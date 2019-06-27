#include<stdio.h>

int main()
{
	char a[20];
	char b[20];
	int i;

	printf("为数组a赋值:\n");
	scanf("%s",&a);

	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
	b[i]='\0';
	printf("数组b的元素为:%s\n",b);
	return 0;
}
