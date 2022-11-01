#include<stdio.h>
float conversion(float);
void main()
{
float celcius;
printf("enter the amount of celcius :");
scanf("%f",&celcius);
printf("celcius=%.0f\n",celcius);
conversion(celcius);
}
float conversion(float x)
{
float fahrenheit;
fahrenheit=(1.8*x)+32;
printf("fahrenheit=%.2f\n",fahrenheit);
}
