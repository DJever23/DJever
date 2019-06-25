/*字符串比较*/
#include<stdio.h>
#include<string.h>

int main()
{
	char user[20]={"dengjie"};
	char password[20]={"DJhb1371579547"};
	char ustr[20],pwstr[20];
	int i=0;

	while(i<3)
	{
		printf("输入用户名字符串:\n");
		scanf("%s",&ustr);
		printf("输入密码字符串:\n");
		scanf("%s",&pwstr);
		if(strcmp(user,ustr))
		{
			printf("用户名字符串输入错误！\n");
		}
		else
		{
			if(strcmp(password,pwstr))
			{
				printf("密码字符串输入错误！\n");
			}
			else
			{
				printf("欢迎使用！\n");
				break;
			}
		 }
		 i++;
	}
	if(i==3)
	{
		printf("输入字符串错误3次！\n");
	}

	return 0;
}
