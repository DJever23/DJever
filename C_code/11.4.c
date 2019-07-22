/*通过指针使用点运算符引用结构体变量的成员*/
#include<stdio.h>

int main()
{
	struct Student
	{
		char cName[20];
		int iNumber;
		char cSex;
		int iGrade;
	}student={"dengjie",1207040209,'M',3};

	struct Student *pStruct;
	pStruct=&student;
	printf("----the student's information----\n");
	printf("Name:%s\n",(*pStruct).cName);
	printf("Number:%d\n",(*pStruct).iNumber);
	printf("Sex:%c\n",(*pStruct).cSex);
	printf("Grade:%d\n",(*pStruct).iGrade);
	return 0;
}
