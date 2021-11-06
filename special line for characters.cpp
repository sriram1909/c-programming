#include<stdio.h>
main()
{
	int i,j;
	char ch='A';
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++,ch++)
			printf("%c\t",ch);
		printf("\n");
	}
}

