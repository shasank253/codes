include<stdio.h>
int lcm(int,int);
int main ()
{
int a,b;
printf("\n enter two numbers:");
scanf("%d %d",&a,&b);
lcm=lcm(a,b);
printf("lcm of %d and %d:%d \n);
return 0;
}
int lcm(int a,int b)
{
static int temp=1;
if(temp%a==0&&temp%b==0)
{
return temp;
}
else
{
temp++;
lcm(a,b);
return temp;
}}
