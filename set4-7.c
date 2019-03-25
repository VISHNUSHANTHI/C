#include<stdio.h>
void main()
{
int a,b,c;
 printf("Eneter the a and b values\n");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("%d %d",a,b);
}
