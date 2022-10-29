#include<stdio.h>
void main()
{
int a;
long int ans=1;
printf("enter the number :");
scanf("%d",&a);
for(int i=1;i<=a;i++)
 {
 ans*=i;
 }
 printf("factorial of the given number :%ld\n",ans);
}
