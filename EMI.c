#include<stdio.h>
#include<math.h>
void main()
{
int p,t;
float EMI,r,x,z,y;
printf("Enter the value of p,r,t\n");
scanf("%d%f%d",&p,&r,&t);
x=t*12;
y=r/(100*12);
z=pow((1+y),x);
EMI=(p*y*z)/(z-1);
printf("z=%f",z);
printf("y=%f",y);
printf("x=%f",x);
printf("EMI=%f",EMI);
}
