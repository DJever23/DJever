/*使用共用体变量*/
#include<stdio.h>

union DataUnion
{
	int iInt;
	char cChar;
};

int main()
{
	union DataUnion Union;
	Union.iInt=97;
	printf("iInt:%d\n",Union.iInt);
	printf("cChar:%c\n",Union.cChar);
	Union.cChar='A';
	printf("iInt:%d\n",Union.iInt);
	printf("cChar:%c\n",Union.cChar);
	return 0;
}
