#include<stdio.h>
void main()
{
int a,b,c,d,e,n,t;
printf("Enter the number\n");
scanf("%d",&n);
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;
d=n%10;
n=n/10;
e=n/1;
n=n/10;
t=a*10000+b*1000+c*100+d*10+e*1;
printf("Reversed number=%d",t);
}
