#include<stdio.h>
int main()
{
  int x,y;
  printf("\n enter valeu of x and y");
  scanf("%d %d",&x,&y);
  x=x+y;
  y=x-y;
  x=x-y;
  printf("\n x=%d y=%d",x,y);
  return 0;
}
