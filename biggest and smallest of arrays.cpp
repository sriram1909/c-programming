#include<stdio.h>
main()
{
	int a[10],i,n,big,small;
	printf("Enter no.of values to input:");
	x:
		scanf("%d",&n);
		if(n<0||n>=10)
		{
			printf("Input is wrong....\nChoose correct number between 1 to 10:");
			goto x;
		}
		printf("Enter %d number of integers\n",n);
		for(i=0;i<n;i++)
			scanf("%d",a[i]);
		big=small=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]>big)
				big=a[i];
			if(a[i]<small)
				small=a[i];
		}
		printf("%d is the biggest of given integers",big);
		printf("%d is the smallest of given integers",small);
}

