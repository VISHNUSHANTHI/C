#include<stdio.h>
int main(void)
{
int a[100],i,max=0,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(max<a[i])
{
max=a[i];   
}
}
printf("%d",max);
}
