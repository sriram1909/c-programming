#include<stdio.h>
main()
{
	int i,j,c,n,k;
	printf("Enter a final value:");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		for(j=(n-c);j>0;j--)
			printf(" ");
		for(i=c;i>0;i--)
			printf("%d",i);
		for(k=2;k<=c;k++)
			printf("%d",k);
		printf("\n");
	}
	return 0;
}
