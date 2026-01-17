#include<stdio.h>
int main()
{
int x,y;
printf("Enter the x and y co-ordinates:");
scanf("%d%d",&x,&y);
if (x == 0 && y == 0)
printf("It's the point of intersection  of the co-ordinate axes\n");
else if (x == 0)
printf("The point lies on y-axis\n");
else if (y == 0)
printf("The point lies on x-axis\n");
else if (x > 0 && y > 0)
printf("The point lies in 1st Quadrant\n");
else if ( x < 0 && y > 0)
printf("The point lies in 2nd Quadrant\n");
else if ( x < 0 && y < 0)
printf("The point lies in 3rd Quadrant\n");
else 
printf("The point lies in 4th Quadrant\n");
}
