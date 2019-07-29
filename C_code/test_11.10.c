#include<stdio.h>

struct Student
{
	char cName[20];
	int iInt;
};	
int main()
{
	char name[10];
	int i,j,icount;
	struct Student student[3]={{"dengjie",0},{"mabo",0},{"wubiao",0}};
	printf("有效选票张数为：\n");	
	scanf("%d",&icount);
	for(i=0;i<icount;i++)
	{

		printf("请输入名字:\n");
		scanf("%s",name);

		for(j=0;j<3;j++)
		{
			if(strcmp(student[j].cName,name)==0)
			{
				student[j].iInt++;
			}
		}
	}
		/*if(Name=="dengjie")
		{
			student1.iInt++;
			icount++;
		}
		else if(student->cName=="mabo")
		{
			student2.iInt++;
			icount++;
		}
		else if(student->cName=="wubiao")
		{
			student3.iInt++;
			icount++;
		}
		else
			printf("此票作废\n");
		*/
	
	/*
	printf("dengjie有%d张选票\n",student1.iInt);
	printf("mabo有%d张选票\n",student2.iInt);
	printf("wubiao有%d张选票\n",student3.iInt);
	*/
	for(i=0;i<3;i++)
	{
		printf("%s有%d张选票\n",student[i].cName,student[i].iInt);
	}
	return 0;
}
