#include<stdio.h>
void main()
{
int a,b,compute;
printf("Enter the value of a and b: \n");
scanf("%d%d",&a,&b);
printf("Before swapping: \n");
printf("a=%d b=%d\n",a,b);
compute=a;
a=b;
b=compute;
printf("After swapping: \n");
printf("a=%d b=%d\n",a,b);
}
