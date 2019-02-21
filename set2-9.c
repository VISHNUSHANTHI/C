#include<stdio.h>
int main()
{
int n,a,sum=1;
scanf("%d",&a);
n=a;
while(a!=0)
{
sum=sum*a;
a--;
}
printf("factorial of %d is:%d",n,sum);
}
