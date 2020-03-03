#include<stdio.h>
int main()
{
int a,b,sum,diff,prod,div;
printf("Enter the values of a & b:  \n");
scanf("%d%d" ,&a,&b);
sum=a+b;
printf("Enter the values of a: \n");
scanf("%d",&a);
printf("Enter the values of b: \n");
scanf("%d",&b); 
diff=a-b;
printf("Enter the values of a:\n");
scanf("%d" ,&a);
printf("Enter the values of b:\n");
scanf("%d" ,&b);
prod=a*b;
printf("Enter the values of a:\n");
scanf("%d" ,&a);
printf("Enter the values of b:\n");
scanf("%d" ,&b);
div=a/b;
printf("The product is %d \n",prod);
printf("The diff is:  %d \n",diff);
printf("The sum of two numbers is: %d \n",sum);
printf("The div is:  %d \n",div);
}
