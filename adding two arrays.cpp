#inclue<stdio.h>
main()
{
	int a[10],i,n,sum=0;
	printf("Enter no.of values to input:");
	x:
	scanf("%d",&n);
	if(n<0||n>=10)
	{
		printf("Input is wrong....\nChoose a number between 1 to 10");
		goto x;
	}
	print("Enter %d integer values",n);
	if(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("The sum of given string is %d",sum);
}
