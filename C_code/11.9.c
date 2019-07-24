#include<stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

struct student
{
    char name[30];
    int num;
    char sex;
    struct date birthday;
}student={"dengjie",1207040209,'M',{1994,11,8}};

int main()
{
    printf("----information----\n");
    printf("Name:%s\n",student.name);
    printf("Number:%d\n",student.num);
    printf("Sex:%c\n",student.sex);
    printf("Birthday:%d.%d.%d\n",student.birthday.year,student.birthday.month,student.birthday.day);
    return 0;
}



