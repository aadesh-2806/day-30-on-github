#include<stdio.h>
#include<math.h>

void main()
{
	int n,s,t;
	float l;
	printf("hello\nenter value=");
	scanf("%d",&n);
	printf("enter precision=");
	scanf("%d",&t);
	
	l=pow(n,0.5);
	t=pow(10,t);
	
	l=l*t*10;
	s=l/10;
	l=s;
	l=l/t;
	printf("%f",l);
	getch();
}

