#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void calculator();
void wordsintext();
void pattern();
void factorial();
void prime();
void repeat();
int main()
{
	int x;
	printf("Choose any of the option:\n");
	printf("1.Basic calculator\n2.Count number of words\n3.print right angle triangle\n");
	printf("4.Find factorial\n5.whether number is prime or not\n6.Exit\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			calculator();
			break;
		case 2:
			wordsintext();
			break;
		case 3:
			pattern();
			break;
		case 4:
			factorial();
			break;
		case 5:
			prime();
			break;
		case 6:
			exit(0);
		default:
			printf("Please enter a valid input\n");
			main();
	}		
}
void calculator()
{
	int n;
	double a,b;
	printf("Enter the first number : ");
	scanf("%lf",&a);
	printf("Enter the second number : ");
	scanf("%lf",&b);
	x:
	printf("choose an operation:\n");
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
	scanf("%d",&n);
	switch (n)
	{
		case 1:
			printf("%.1lf + %.1lf = %.1lf\n",a,b,a+b);
			break;
		case 2:
			printf("%.1lf - %.1lf = %.1lf\n",a,b,a-b);
			break;
		case 3:
			printf("%.1lf * %.1lf = %.1lf\n",a,b,a*b);
			break;
		case 4:
			printf("%.1lf / %.1lf = %.1lf\n",a,b,a/b);
			break;
		case 5:
			exit(0);
		default:
			printf("Please give a valid input\n");
			goto x;
	}
	repeat();
}
void wordsintext()
{
	int i,count=0;
	char ch[1000];
	char temp;
	printf("Enter your text here :\n");
	scanf("%c",&temp);
	gets(ch);
	for(i=0;i<(strlen(ch));i++)
	{
		if((ch[i]>='A'&&ch[i]<='Z')||(ch[i]>='a'&&ch[i]<='z')||(ch[i]!=32))
			continue;
		else 
			count++;
	}
	printf("The number of words in the text are %d\n",count+1);
	repeat();
}
void pattern()
{
	int i,j,k,n;
	printf("Enter the final value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	repeat();
}
void factorial()
{
	int i,n,f,t;
	printf("Enter a number to find factorial : ");
	scanf("%d",&n);
	t=n;
	for(f=1;n>0;n--)
	{
		f=f*n;
	}
	printf("The factorial of %d is %d\n",t,f);
	repeat();
}
void prime()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(n==i)
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);
    repeat();
}
void repeat()
{
    int u;
    printf("Do you want to execute another funtion?(1 if yes/0 if no) :");
	scanf("%d",&u);
	if(u==1)
	    main();
	else
	    exit(0);
}
