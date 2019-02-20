#include<stdio.h>
int main()
{
int i,a,b;
printf("enter the number :");
scanf("%d",&a);
printf("enter the number :");
scanf("%d",&b);
for(i=a;i<=b;i++)
{
if(i%2==0)
printf(" %d",i);
}return 0;
}
