#include<stdio.h>

double averange(int Grade[10]);

int main()
{
	int Grade[10];
	int i;
	double iResult;
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个学生的成绩：\n",i+1);
		scanf("%d",&Grade[i]);
	}
	iResult=averange(Grade);
	printf("学生的平均成绩为：%.2f\n",iResult);
	return 0;
}

double averange(int Grade[10])
{
	double iResult=0;
	int i;
	
	for(i=0;i<10;i++)
	{
		iResult+=Grade[i];
	}
	printf("学生的成绩总和为：%.1f\n",iResult);
	iResult=iResult/10;
	return iResult;
}
