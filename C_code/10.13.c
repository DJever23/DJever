/*使用指向指针的指针输出12个月*/
#include<stdio.h>
main()
{
	int i;
	char **p;
	char *month[]=
	{
			"January",
			"February",
			"March",
			"April",
			"May",
			"June",
			"July",
			"August",
			"September",
			"October",
			"November",
			"December"
	};
	for(i=0;i<12;i++)
	{
		p=month+i;
		printf("%s\n",*p);
	}
}
