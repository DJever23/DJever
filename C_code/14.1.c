#include<stdio.h>
main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("/home/dengjie/1.c","w"))==NULL);
	{
		printf("cannot open file\n");
		exit(0);
	}
	ch=getchar();
	while(ch!='#')
	{
		fputc(ch,fp);
		ch=getchar();
	}
	fclose(fp);
}
