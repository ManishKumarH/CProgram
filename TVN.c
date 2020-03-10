#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three sides;\n");
scanf("%d%d%d",&a,&b,&c);
if((a+b>c)||(a+c>b)||(b+c>a))
printf("Triangle is valid\n");
else
printf("Triangle is not valid\n");
}
