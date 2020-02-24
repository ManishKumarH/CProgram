#include<stdio.h>
#include<math.h>
float main()
{
float length,breath,area;
printf("enter the length of the rectangle:\n");
scanf("%f", &length);
printf("enter the breath of the rectangle:\n");
scanf("%f", &breath);
area=length*breath;
printf("the area of the rectangle=%.3f\n", area);
}
