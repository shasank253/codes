#include<stdio.h>
int main()
{
int array[9];
int i,n,sum=0;
int *p;
printf("\n enter range:");
scanf("%d",&n);
printf("\n enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&array[i]);
p=array;
for(i=0;i<n;i++)
{
sum=sum+*p;
p++;
}
printf("\n summ of array elements:%d",sum);
return 0;
}
