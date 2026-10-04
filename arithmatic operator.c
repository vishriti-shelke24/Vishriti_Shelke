#include<stdio.h>
int main()
{
	int a,b,add,sub,multi,div,mode;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	add=a+b;
	printf("add=%d",add);
	sub=a-b;
	printf("sub=%d",sub);
	multi=a*b;
	printf("multi=%d",multi);
	div=a/b;
	printf("div=%d",div);
	mode=a%b;
	printf("mode=%d",mode);
	return 0;
}

