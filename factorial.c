#include<stdio.h>
int main()
{
	int num;
	int i = 2 ,r = 1 ;
	printf("Enter a number:");
	scanf("%d",&num);
	do
	{
		r = r*i;
		i++;
	}
	while(i < num);
	printf("The factorial is %d ",r);
}
		
