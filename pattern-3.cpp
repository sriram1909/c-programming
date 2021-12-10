#include<stdio.h>
int main()
{
	int i,j,n,c;
	printf("Enter a final value:");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		for(j=n-c;j>0;j--)
			printf(" ");
		for(i=1;i<=c;i++)
			printf("%d ",c);
		printf("\n");
	}
	for(c=n-1;c>0;c--)
	{
		for(j=n-c;j>0;j--)
			printf(" ");
		for(i=1;i<=c;i++)
			printf("%d ",c);
		printf("\n");
	}
}
