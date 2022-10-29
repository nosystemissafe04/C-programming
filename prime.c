//this is  a mistake hahaha but working nice and simple
#include<stdio.h>
void main()
{
int a,store;
printf("enter the number :");
scanf("%d",&a);
for(int i=1;i<=a;i++)
  {
  if(a==i)
   {
   store+=a;
     }
 else if(a%i==0)
  {
    store+=i%a;
   }  
}
 if(store==a+1)
  {
  printf("the following number is a prime number:%d \n",a);
  }
 else
 printf("the following number is not a prime number:%d\n",a);  

}
