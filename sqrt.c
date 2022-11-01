#include<stdio.h>
#include<math.h>
void squareroot();
int main()
{
squareroot();
return 0;
}
void squareroot()
{
double square,number;
printf("enter the number to get the perfect square :");
scanf("%lf",&number);
//computing the square root of the number 
square = sqrt(number);/*sqrt is the function declared in math.h haeder file 
                       the veriable number is veriable in which user is 
                       giving the value and sqrt is function is computing 
                       the square of that number
                       then the value is store in a veriable called square */ 
printf("square root of %lf =%lf\n",number,square);
printf("orignal number =%lf\n",square*square);
}
