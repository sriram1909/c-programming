#include<stdio.h>
int main()
{
	int i,j,c,n;
	printf("Enter a final value:");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		for(j=1;j<=(n-c);j++)
			printf(" ");
		for(i=c;i>0;i--)
			printf("* ");
		printf("\n");
	}
	return 0;
}
