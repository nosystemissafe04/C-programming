#include<stdio.h>
void main()
{
int a,b,c=0;
printf("enter the value :");
scanf("%d",&a);
for (b=a;b>0;b=b/10)
 {
 c =c*10;
 c = c+(b%10);
 }
 printf("Rev = %d",c);
}
