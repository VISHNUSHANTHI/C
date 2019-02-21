#include<stdio.h>
int main()
{
int a,b,i,j,count;
printf("\nEnter the first number");
scanf("%d",&a);
printf("\nEnter the last number");
scanf("%d",&b);
for(i=a;i<=b;++i)
{
count=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
count++;
break;
}
}
if(count==0)
{
printf("\n%d",i);
}
}
return 0;
}
