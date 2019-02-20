#include<stdio.h>
#include<conio.h>
void main()
{
int i,n flag=0;
printf("enter the positive integer:");
scanf("%d",&n);
for(i=2;i<=n%2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("The given number is a prime number",n);
}
else
{
printf("The given number is not a prime number",n);
}
return 0;
}
