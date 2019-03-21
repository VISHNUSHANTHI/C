#include <stdio.h>
#include<string.h>
int main(void)
{
char string[12];
int len,i,n,flag=0;
scanf("%s",string);
len=strlen(string);
for(i=0;i<len;i++)
{
if(string[i]>='0'&&string[i]<='9')
{
flag=1;
}
else
{
printf("NO");
}
}
if(flag==1)
{
printf("YES");
}
return 0;
}
