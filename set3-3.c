#include<stdio.h>
int main(void)
{
int a[100],i,min,n;
printf("Enetr the array size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(min>a[i])
{
min=a[i];   
}
}
printf("%d",min);
}
