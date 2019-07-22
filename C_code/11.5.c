/*使用指向运算符引用结构体对象成员*/
#include<stdio.h>
#include<string.h>

struct Student
{
	char cName[20];
	int iNumber;
	char cSex;
	int iGrade;
}student;

int main()
{
	struct Student *pStruct;
	pStruct=&student;

	strcpy(pStruct->cName,"dengjie");
	pStruct->iNumber=1207040209;
	pStruct->cSex='M';
	pStruct->iGrade=3;

	printf("----the student's information----\n");
	printf("Name:%s\n",student.cName);
	printf("Number:%d\n",student.iNumber);
	printf("cSex:%c\n",student.cSex);
	printf("Grade:%d\n",student.iGrade);
	return 0;
}
