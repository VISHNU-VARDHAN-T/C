#include<stdio.h>
int main()
{
int LAN,PHY,CHE,MATH,TOTAL;
printf("enter your marks:\n  LAN: PHY:  CHE:  MATH:");
scanf("%d",&LAN);
scanf("%d",&PHY);
scanf("%d",&CHE);
scanf("%d",&MATH);
TOTAL=LAN+PHY+CHE+MATH;
printf("the total marks are: %d\n",TOTAL);
}
