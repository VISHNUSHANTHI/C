#include <stdio.h>
int main(void) 
{
int min,hrs,m,secs=00;
printf("enter the time in minutes:");
scanf("%d",&min);
hrs=min/60;
m=min%60;
if(m>60)
{
secs=m%60;
m=m-secs;
}
printf("hrs=%d min=%d secs=%d",hrs,m,secs);
return 0;
}
