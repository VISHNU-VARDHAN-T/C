#include<stdio.h>
int area();
int perimeter();
int main()
{
	int num;
	printf("Enter side:");
	scanf("%d",&num);
    area(num);
    perimeter(num);
}
int area(int num)
{
	int s = num*num;
	printf("area of square is = %d",s);
	return 0;
}
int perimeter(int num)
{
	int u = 4*num;
	printf("perimeter of square is = %d",u);
	return 0;
}
