#include<stdio.h>
int main ()
{
int i,j,n;
printf ("\n enter no. Of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
if(j%2==1)
{
printf("01");
}
else{
printf("01");
}
}
printf("\n");
}
return 0;
}
