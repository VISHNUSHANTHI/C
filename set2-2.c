include <stdio.h>
int main() 
{
int temp,sum=0,rem,n;
printf("Enter the series of numbers :");
scanf("%d",&n);
temp=n;
while(n!=0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
if(temp==sum)
{
printf("PALINDROME");
}
else
{
printf("NOT PALINDROME");
}
return 0;
}
