#include<stdio.h>

int main()
{
  int a[3][3];
  int i,j,sum=0;
  printf("请输入每个数组元素的值,并按回车键确认：\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("a[%d][%d]=",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("输入的三维数组为：\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==j)
      {
        sum=sum+a[i][j];
      }
    }
  }
  printf("三维数组的对角线之和为:%d\n",sum);
  return 0;
}
