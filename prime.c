include<stdio.h>
int prime(int,int);
int main ()
{
int n, prime;
printf("\n enter a number:");
scanf("%d",&n);
prime=prime(n,n/2);
if(prime==1)
printf("\n prime");
else 
printf("\n not prime");
return 0;
}
int prime(int n,int i)
{
if(i==1){
return 1;}
else{
if(n%i==0)
return 0;
else
prime(n,i-1);
}
}
