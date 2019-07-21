/*使用指向指针的指针作函数参数，编程实现对英文的12个月份按字母顺序排序*/
#include<stdio.h>
#include<string.h>

sort(char *strings[],int n)
{
	
	char *temp;
	int i,j;

//	printf("%s,%s\n",strings[i],strings[j]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(strings[i],strings[j])>0)
			{
				temp=strings[i];
				strings[i]=strings[j];
				strings[j]=temp;
			}
		}
	}
}
main()
{
	int n=12;
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
	p=month;
	sort(p,n);
	printf("排序后的12月份如下:\n");
	for(i=0;i<n;i++)
		printf("%s\n",month[i]);
}
