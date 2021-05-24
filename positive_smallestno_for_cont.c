#include<stdio.h>

void main()
{
	
	int i,a[100],t,n,m,s,j,u,l;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter no%d=",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			break;
		}
	}
	for(;i<n-1;i++)
	{
		if((a[i+1]-a[i])>1)
		{
			printf("%d",a[i]+1);		
			break;
		}
		i++;
	}
	if(i==(n-1))
	{
		printf("%d",a[i]+1);
	}
	
	getch();
	
}	 		
