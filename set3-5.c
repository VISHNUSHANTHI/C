#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],temp,n,i,j;
printf("Enter the value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
if(n%2==0)
{
n=n/2;
printf("\n%d",a[n-1]);
}
else
{
n=n/2;
printf("\n%d",a[n]);
}
getch();
}
