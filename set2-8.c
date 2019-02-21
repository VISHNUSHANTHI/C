#include<stdio.h>
int main()
{
int a,k,n,sum=0,l,h;
scanf("%d%d",&l,&h);
while(n!=h)
{
a=k;
n=a;
while(n!=0)
{
k=n%10;
sum=sum+(k*k*k);
n=n/10;
}
if(a==sum)
printf("%d\n",k);
}
}
