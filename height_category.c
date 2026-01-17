#include<stdio.h>
int main()
{
int height;
printf("Enter the height:");
scanf("%d",&height);
if (height > 160) {
printf("The person is Tall\n");
} else if (height < 130) {
printf("The person is short\n");
} else {
printf("The person is medium height\n");
}
}

