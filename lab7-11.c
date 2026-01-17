#include<stdio.h>
int calculator();
int main()
{
	int num1,num2;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	calculator(num1,num2);
	return 0;
}
int calculator(int num1,int num2)
{
	int choice;
	printf("Choose the operation to be perfomed: 1.Addition,2.Multiplication,3.Division,4,Subtraction\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		int u;
		if(choice == 1)
		u = num1+num2;
		printf("Sum is :%d\n",u);
	break;
	case 2:
	int v;
	if(choice == 2)
	v = num1*num2;
	printf("Product is :%d\n",v);
	break;
	case 3:
	int t;
	t = num1/num2;
	printf("Division is :%d\n",t);
	break;
	case 4:
	int s;
	s = num1-num2;
	printf("Difference is :%d\n",s);
	break;
	default:
	printf("Invalid Input\n");
}
	
		
	
}
