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
		for(i=1;i<=c;i++)
			printf("%d ",i);//we can replace 'i' with 'c' to have increasing numbers triangle
		printf("\n");
	}
}
