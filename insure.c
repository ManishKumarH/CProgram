#include<stdio.h>
void main()
{
int age;
char m,g;
printf("Enter age:\n");
scanf("%d", &age);
printf("Enter martial status:\n");
scanf(" %c",&m);
printf("Enter gender:\n");
scanf(" %c",&g);
printf("The given input values are age=%d\n",age);
printf("The given marital status=%c\n",m);
printf("The given gender=%c\n",g);
if (age > 25 && m=='m' && g=='f')
{
printf("The person is insured");
}
else
{
printf("The person is not insured");
}
}


