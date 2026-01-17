#include<stdio.h>
int area_perimeter();

int main()
{
	area_perimeter();

}
int area_perimeter()
{
 int num,ar,per;
 printf("Enter an number\n");
 scanf("%d",&num);
 ar  = num*num;
 per = 4*num;
 printf("Area of square is  = %d\n and\n perimeter of square is =%d",ar,per);
}



