#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int i,count=1;
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='.')
{
count=count+1;
}
}
printf("%d",count);
getch();
}
