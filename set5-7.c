include <stdio.h>
#include<conio.h>
int main() 
{
int n,i,a[10],min=99,max=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 if(a[i]>max)
 {
 max=a[i];
 }
 }
 for(i=0;i<n;i++)
 {
 if(a[i]<min)
 {
 min=a[i];
 }
 }
 printf("min:%d\nmax:%d",min,max);
 return 0;
}
