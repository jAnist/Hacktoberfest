#include<stdio.h>
int main()
{
	int n;
	printf("Enter any no to check whether it's odd or even : ");
	scanf("%d",&n);
	if (n%2 == 0)
	{
		printf("Even\n");
	}else
	{
		printf("Odd\n");
	}
	return 0;
}
