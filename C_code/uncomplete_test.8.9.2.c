#include<stdio.h>

int main()
{
	int Grade[10];
	char Name[10];
	char Pos;
	int i,j,iTemp;
	int k=0;

	for(i=0;i<10;i++)
	{
		printf("请输入第%d个学生的姓名及成绩:\n",i+1);
		scanf("%s%d",&Name[i],&Grade[i]);
	}

	for(i=0;i<10;i++)
	{
		for(j=9;j>=i;j--)
		{
			if(Grade[j]>Grade[j-1])
			{
				iTemp=Grade[j];
				Grade[j]=Grade[j-1];
				Grade[j-1]=iTemp;
				//Pos=Name[j];
				//Name[j]=Name[j-1];
				//Name[j-1]=Pos;

			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("学生名次及成绩如下:\n");
		printf("姓名:%s,成绩:%d\n",Name[i],Grade[i]);
		if(i==4)
		{
			printf("\n");
		}
	}
	return 0;
}

