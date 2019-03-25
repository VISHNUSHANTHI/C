#include <stdio.h>
#include<conio.h>
int main()
{
	int n,i,x=1,pow=2;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    x=x*pow;
	    if(x==n)
	    {
	        printf("%d is a power of 2",n);
	        break;
	    }
	}
        if(x!=n)
	    {
	        printf("%d is not a power of 2",n);
	    }
	return 0;
}
