#include<stdio.h>
void main()
{
int n,a,d,sum=0;
printf("enter the no");
scanf("%d",&n);
a=n;
while(a!=0)
{
d=a%10;
sum=sum+d*d*d;
a=a/10;
}
if(sum==n)
{
printf("armtrong no is");
}
else
{
printf("not armtrong no");
}
}
