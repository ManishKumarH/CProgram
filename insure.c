#include<stdio.h>
void main()
{
int age;
char ms,ge;
printf("Key in the age of the person to be insured or not\n");
scanf("%d",&age);
printf("Key in the martial status of the person to be insured or not\n");
scanf(" %c",&ms);
printf("Key in the gender of the person to be insured or not\n");
scanf(" %c",&ge);
printf("The given value of age of the person to be insured or not is =%d\n",age);
printf("The given value of martial status of the person to be insured or not is =%c\n",ms);
printf("The given value of gender of the person to be insured or not is =%c\n",ge);
if (age > 25 && ms=='m' && ge=='f')
{
printf("The person is insured");
}
else
{
printf("The person is not insured");
}
}
