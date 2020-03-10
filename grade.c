#include<stdio.h>
void main()
{
int s1,s2,s3,s4,s5,sum,perc;
printf("Enter s1,s2,s3,s4,s5 values:\n");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
sum=(s1+s2+s3+s4+s5);
perc=sum*100/500;
if(perc>=90)
printf("Grade=S\n");
else
if(perc>=80)
printf("Grade=A\n");
else
if(perc>=70)
printf("Grade=B\n");
else
if(perc>=60)
printf("Grade=C\n");
else
printf("Grade=FAIL\n");
}
