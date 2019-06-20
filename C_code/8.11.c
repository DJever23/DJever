/*计算字符串中单词的个数*/
#include<stdio.h>

int main()
{
  char cString[100];
  int iIndex,iWord=1;
  char cBlank;
  gets(cString);    //gets函数警告被弃用

  if(cString[0]=='\0')
  {
    printf("There is no char!\n");
  }
  else if(cString[0]==' ')
  {
    printf("First char just is a blank!\n");
  }
  else
  {
    for(iIndex=0;cString[iIndex]!=0;iIndex++)
    {
      cBlank=cString[iIndex];
      if(cBlank==' ')
      {
        iWord++;
      }
    }
    printf("字符串中的单词个数为%d\n",iWord);
  }
  return 0;
}
