/*反转输出字符串*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char String[20];
	char Reverse[20]={"0"};
	int size;
	printf("请输入字符串:\n");
	scanf("%s",&String);
	size=strlen(String);

	for(i=0;i<20;i++)
	{
		Reverse[size-i-1]=String[i];
	}
	printf("输出反转后的字符串:%s\n",Reverse);

	return 0;
}

	
