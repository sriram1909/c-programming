//RHOMBUS PATTERN
#include<stdio.h>
main()
{
	int i,j,c,n;
	printf("Enter a final value:");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		for(j=n-c;j>0;j--)
			printf(" ");
		for(i=1;i<=n;i++)
			printf("* ");
		printf("\n");
	}
	return 0;
}
