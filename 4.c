#include<stdio.h>
int main()
{
		int n,a,b,c;
		printf("enter the number");
		scanf("%d",&n);
		a=n%10;
		n=n/10;
		b=n%10;
		n=n/10;
		c=n;
		if(a==b)
			printf("first number and third number are equal");
		else
			printf("not equal");
			
	return 0;
}
	
