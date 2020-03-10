#include<stdio.h>
char main()
{
char m,g;
int age;
printf("Enter age\n");
scanf("%d", &age);
printf("Enter martial status and gender\n");
scanf("%c%c", &m,&g);
/*printf("Enter gender\n");
scanf("%c", &g);*/
printf("The given input values are age=%d\n",age);
printf("The given marital status=%c and gender=%c\n",m,g);
/*if (m == 'm')
{
	printf("Insured\n");
}*/
if(m == 'u' && age > 25 && g == 'f')
{
	printf("Insured\n");
}
else if(m == 'u' && age > 30 && g == 'm')
{
	printf("Insured\n");
}
else
printf("Not insured\n");
}
