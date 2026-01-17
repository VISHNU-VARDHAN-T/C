#include<stdio.h>
int max();
int main()
{
	int n1,n2,n3;
	printf("Enter three numbers:");
	scanf("%d%d%d",&n1,&n2,&n3);
	max();
}
int max(int n1,n2,n3;)
{
	if(n1 > n2 || n1 > n3)
	printf("%d is the maximum number",n1);
	else if(n2 > n3)
	printf("%d is the maximum number",n2);
	else 
	printf("%d is the maximum number",n3);
 return 0;
}

