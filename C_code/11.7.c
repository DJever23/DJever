/*使用结构体变量作为函数参数*/
#include<stdio.h>

struct Student
{
	char cName[20];
	float fScore[3];
}student={"dengjie",98.5f,89.0,93.5f};

void Display(struct Student stu)
{
	printf("----information----\n");
	printf("Name:%s\n",stu.cName);
	printf("Chinese:%.2f\n",stu.fScore[0]);
	printf("Math:%.2f\n",stu.fScore[1]);
	printf("English:%.2f\n",stu.fScore[2]);

	printf("Average score:%.2f\n",(stu.fScore[0]+stu.fScore[1]+stu.fScore[2])/3);
}

int main()
{
	Display(student);
	return 0;
}
