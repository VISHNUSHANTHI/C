#include <stdio.h>
int main() 
{
int n;
int sum=0,i;
printf("Enter any number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
return 0;
}
