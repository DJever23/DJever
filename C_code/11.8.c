#include<stdio.h>

struct Student
{
    char cName[20];
    float fScore[3];
}student={"dengjie",98.5f,89.0,93.5f};

void Display(struct Student* stu)
{
    printf("----information----\n");
    printf("Name:%s\n",(*stu).cName);
    printf("English:%.2f\n",stu->fScore[2]);
    stu->fScore[2]=90.0f;
}

int main()
{
    struct Student* pStruct=&student;
    Display(pStruct);
    printf("Changed English:%.2f\n",pStruct->fScore[2]);
    return 0;
}     
