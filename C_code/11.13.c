/*共用体变量的初始化*/
#include<stdio.h>

union DataUnion
{
	int iInt;
	char cChar;
};

int main()
{
	union DataUnion Union={97};
	printf("iInt:%d\n",Union.iInt);
	printf("cChar:%c\n",Union.cChar);
	return 0;
}
