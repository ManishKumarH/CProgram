#include<stdio.h>
float main()
{
float a,b,h,area;
printf("Input the value of a: ");
scanf("%f", &a);
printf("Input the value of b: ");
scanf("%f", &b);
printf("Input the value of h: ");
scanf("%f", &h);
area=0.5*(a+b)*h;
printf("Area of Trapezium is: %f \n",area);
}
