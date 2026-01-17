#include<stdio.h>
int main()
{
char c;
printf("Enter any character:");
scanf("%c",&c);
if (c >= 'A' && c <= 'Z')
printf("You have entered an uppercase character!!\n");
else if (c >= 'a' && c <= 'z')
printf("You have netered a lowercase character!!\n");
else
printf("!Invalid input!");
}
