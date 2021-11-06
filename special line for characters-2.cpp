#include<stdio.h>
main()
{
	int i,j;
	char ch='A';
	for(i=1;i<=4;i++,ch++)
	{
		for(j=1;j<=i;j++)
			printf("%c\t",ch);
		printf("\n");
	}
}
/*
to print the characters in the format
A
A B 
A B C
A B C D
we should give the initial value of character in the inner for loop
i.e, for(ch='A',j=1;j<=i;j++,ch++)
*/
