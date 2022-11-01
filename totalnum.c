#include<stdio.h>
void main()
{
long a,b,j=0,i;
printf("enter the value :");
scanf("%ld",&a);
for (i=1;i<=a;i*=10)
 {
 j++;
 b=a/i;
 }printf("the following number is of %ld digits",j);
}
