#include<stdio.h>
int max();
int max()
{
	int n1,n2,n3;
	printf("Enter three numbers:");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1 > n2 || n1 > n3)
	printf("%d is the maximum\n",n1);
	else if(n2 > n3)
	printf("%d is the maximum\n",n2);
	else
	printf("%d is the maximum\n",n3);
}
int main()
{
	max();
	return 0;
} 
	
