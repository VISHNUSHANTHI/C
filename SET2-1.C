#include<stdio.h>
int main(void)
{
int n,k,res=1,i;
printf("Enter the number :");
scanf("%d",&n);
printf("Enetr the exponent value :");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
res=res*n;
}
printf("The result is :%d",res);
}
