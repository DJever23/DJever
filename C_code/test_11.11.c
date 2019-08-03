#include<stdio.h>
#include<stdlib.h>
#if 0
union Category
{
	int iClass;
	char position[20];
};
#endif
struct Teacher
{
	char cJob;
	char cName[20];
	int iNumber;
	char cSex;
	char position[20];

	//union Category Position;
}teacher;
struct Student
{
	char cJob;
	char cName[20];
	int iNumber;
	char cSex;
	int class;
};


void DisplayStudent(struct Student student)
{
	printf("Job:%c\n",student.cJob);
	printf("Name:%s\n",student.cName);
	printf("Number:%d\n",student.iNumber);
	printf("Sex:%c\n",student.cSex);

//	printf("Class:%s\n",student.class);
}

void DisplayTeacher(struct Teacher teacher)
{
	printf("Job:%c\n",teacher.cJob);
	printf("Name:%s\n",teacher.cName);
	printf("Number:%d\n",teacher.iNumber);
	printf("Sex:%c\n",teacher.cSex);

	printf("Position:%s\n",teacher.position);
}

int main()
{
	struct Student student[100];
	int i;

	printf("共有教师1人，学生10人\n");
	printf("老师的信息为:\n");
	teacher.cJob='T';
	strcpy(teacher.cName,"wubiao");
	teacher.iNumber=1010;
	teacher.cSex='M';
	strcpy(teacher.position,"Chinese tescher");

	DisplayTeacher(teacher);

	for(i=1;i<=3;i++)
	{
		student[i].cJob='S';
		printf("请输入第%d名学生的姓名:",i);
		scanf("%s",&student[i].cName);
		getchar();
		printf("请输入第%d名同学的性别:",i);
		scanf("%c",&student[i].cSex);
		getchar();
		student[i].iNumber=i;
		student[i].class=1;
	}
	printf("一班学生的信息为：\n");
	for(i=1;i<=3;i++)
	{
		DisplayStudent(student[i]);
	}
	return 0;
}


	

