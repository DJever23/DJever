/*选择法排序*/
#include<stdio.h>

int main()
{
  int i,j;
  int a[10];
  int iTemp;
  int iPos;
  printf("为数组元素赋值：\n");
/*从键盘为数组元素赋值*/
  for(i=0;i<10;i++)
  {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
  }

/*从小到大排序*/
  for(i=0;i<9;i++)    //设置外层循环为下标0~8的元素
  {
    iTemp=a[i];       //iTemp为最小值
    iPos=i;
    for(j=i+1;j<10;j++)
    {
      if(a[j]<iTemp)
      {
        iTemp=a[j];
        iPos=j;
      }
    }
    /*交换两个元素值*/
    a[iPos]=a[i];
    a[i]=iTemp;
  }
  printf("数组由小到大排序为：\n");

  /*输出数组*/
  for(i=0;i<10;i++)
  {
        printf("%d\t",a[i]);
    if(i==4)
      printf("\n");
  }
  printf("\n");
  return 0;
}
