#include <stdio.h>
#include<conio.h>
int main() 
{
int n,temp=0,count=0,i;
scanf("%d",&n);
while(n!='\0')
{  
temp=n%10;
count++;
n=n/10;
}
printf("%d",count);
return 0;
}
