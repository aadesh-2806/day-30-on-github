#include<stdio.h>

void main()
{
	
	int i,b[100],a[50][50],s,q,z,c[100],m,n,j,l;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		j=0;
		while(j<n)
		{
			printf("enter value %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
			j++;
		}					
		i++;
	}
	
	j=0;
	while(j<n)
	{
		printf("%d ",a[0][j]);
		j++;
	}
	i=1;
	j=n-2;
	while(i<n)
	{
		printf("%d ",a[i][j]);	
		i++;
		j--;
	}
	j=1;
	while(j<n)
	{
		printf("%d ",a[n-1][j]);
		j++;
	}
	getch();
	
}	
