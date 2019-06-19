#include<stdio.h>

int main()
{
  int iStep;
  int iSelect;
  for(iStep=1;iStep<10;iStep++)
  {
    printf("The Step is:%d\n",iStep);
    do
    {
      printf("enter a number to select\n");
      printf("(0 is quit,99 for the next step)\n");
      scanf("%d",&iSelect);
      if(iSelect==0)
      {
        goto exit;
      }
    }
    while(iSelect!=99);
  }
exit:
    printf("Exit the program!\n");
    return 0;
}   
