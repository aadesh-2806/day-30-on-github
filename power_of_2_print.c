#include<stdio.h>

void main()
{
	
	int i,a[100],t,n,m,s,j,u,l;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	while(1)
	{
		if(n==2)
		{
			printf("true");
			break;
		}
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			printf("false");
			break;
		}
		if(n==0)
		{
			printf("false");
			break;
		}
	}
	
	getch();
	
}	 		
