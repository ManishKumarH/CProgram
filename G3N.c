#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter a,b,c values:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&b>c)
printf("a is greater\n");
else
if(b>a&&b>c)
printf("b is greater\n");
else
printf("c is greater\n");
}
