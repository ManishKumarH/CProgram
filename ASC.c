#include<stdio.h>
void main()
{
int a,b,ch;
printf("Enter a,b values:\n");
scanf("%d%d",&a,&b);
printf("1.add");
printf("2.sub");
printf("3.mul");
printf("4,div");
printf("Enter your ch:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("%d",a+b);
break;
case 2:printf("%d",a-b);
break;
case 3:printf("%d",a*b);
break;
case 4:printf("%d",a/b);
break;
default:
printf("Nothing");
}
}
