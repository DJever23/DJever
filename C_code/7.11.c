#include<stdio.h>

int main()
{
  int iCount;
  for(iCount=0;iCount<10;iCount++)
  {
    if(iCount==5)
    {
      printf("Break here\n");
      break;
    }
    printf("the count is:%d\n",iCount);
  }
  return 0;
}
