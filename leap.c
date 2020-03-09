#include<stdio.h>
void main()
{
int year;
printf("Enter the year:\n");
scanf("%d",&year);
if(year%4==0)
printf("This is a leap year\n");
else
printf("This is not a leap year\n");
}
