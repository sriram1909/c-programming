#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("enter any two values : ");
	scanf("%d %d",&a,&b);
	printf("1.Add\n2.Sub\n3.Mul\n4.Div\n5.Mod\n");
	printf("enter your choice (1 to 5) : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("the sum of %d and %d is %d",a,b,a+b);
			break;
		case 2:
			printf("the sub of %d and %d is %d",a,b,a-b);
			break;
		case 3:
			printf("the mul of %d and %d is %d",a,b,a*b);
			break;
		case 4:
			printf("the div of %d and %d is %d",a,b,a/b);
			break;
		case 5:
			printf("the mod of %d and %d is %d",a,b,a%b);
			break;
		case 6:
			exit(0);
		default:
			printf("input invalid....");
		return 0;
	}
}
