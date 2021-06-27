#include<stdio.h>
int sum(int);
int main ()
{
int n,sum;
printf("\n enter a number:");
scanf("%d",&n);
sum=sum(n);
printf("\n sum of total numbers:");
return 0;
}
int sum(int n)
{
static int sum=0,x;
if(n!=0)
{
x=n%10;
sum=sum+x;
sum(n/10);
}
return 0;
}
