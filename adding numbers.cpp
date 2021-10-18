#include<stdio.h>
int main()
{
	int x, y, product;
	printf("enter two integers:");
	scanf("%d %d",&x ,&y);
	product = x*y;
	printf("%d * %d = %d",x,y,product);
	return 0;
}
