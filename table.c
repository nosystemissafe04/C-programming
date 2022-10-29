#include<stdio.h>
void main()
{
int a;
printf("enter the number:");
scanf("%d",&a);
for(int i=1;i<=10;i++)
 {
 printf("%dX%d=%d\n",a,i,a*i);
 }
}
