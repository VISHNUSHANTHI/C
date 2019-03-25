#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int i,count=0;
printf("\n enter the string");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(isdigit(str[i])!=0)
count++;
}
printf("%d",count);
getch();
}
