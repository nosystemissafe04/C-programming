#include<stdio.h>
void main()
{
int a,c;
 printf("enter the number :");
scanf("%d",&a);
for(int i=1;i<=a;a=a/10)
 { 
  c+=a%10;
  
 }
 printf("sum of digits =%d\n",c);
}
