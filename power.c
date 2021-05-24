#include<stdio.h>

int single(int ,int );
void main()
{
	int n,l,t;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	printf("enter power=");
	scanf("%d",&l);
	

	t=single(n,l);
	printf("%d",t);	
}

int single(int x,int y)
{
	int i;
	if(y>0)
	{
		y--;
		return x*single(x,y);
	}
	
	return 1;
}
