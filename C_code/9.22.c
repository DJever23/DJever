/*使用三角函数*/
#include<stdio.h>
#include<math.h>

int main()
{
	double fResultSin;
	double fResultCos;
	double fResultTan;

	double fXsin=0.5;   //这里为弧度，换算成角度的方法为：0.5/pai*180;若是角度(如30度)换成弧度，则是30/180*pai.
	double fXcos=0.5;
	double fXtan=0.5;

	fResultSin = sin(fXsin);
	fResultCos = cos(fXcos);
	fResultTan = tan(fXtan);

	printf("The sin of %lf is %lf\n",fXsin,fResultSin);
	printf("The cos of %lf is %lf\n",fXcos,fResultCos);
	printf("The tan of %lf is %lf\n",fXtan,fResultTan);
	return 0;
}
