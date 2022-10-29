#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the value in a and b :");
scanf("%d %d",&a,&b);
printf("before swapping a=%d and b=%d\n",a,b);
c=a;
a=b;
b=c;
printf("after swapping a=%d and b=%d\n",a,b);
}
