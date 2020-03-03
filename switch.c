#include<stdio.h>
int main()
{
int a,b,ch;
printf("Enter the values of a & b: ");
scanf("%d%d",&a,&b);
printf("Enter choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("sum=%d",a+b);
break;
case 2:printf("sum=%d",a-b);
break;
default:printf("Invalid operator");
}
}
