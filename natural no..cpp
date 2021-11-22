#include<stdio.h>
void natural()
{
	static int i=1;
	printf("%d\t",i++);
}
int main()
{
	int i,n;
	printf("Enter no.of natural numbers to print:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		natural();
}
