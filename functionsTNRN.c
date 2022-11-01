#include<stdio.h>
#include<stdlib.h>
void add();
void sub();
void mul();
void dev();
void main()
{
int a;
printf("enter the number to switch between \nthe arithmetic operators functions\n 1 > addition \n 2 > substraction \n 3 > multiplication \n 4 > division \n 5 > exit\n:");
scanf("%d",&a);
 switch (a)
 {
  case 1:
  add();
  break;
  case 2:
  sub();
  break;
  case 3:
  mul();
  break;
  case 4:
  dev();
  break;
  default:
  exit(1);
 }
}
void add()
{
int a,b;
printf("enter the number :");
scanf("%d%d",&a,&b);
printf("addition of the number is =%d\n",a+b);
}
void sub()
{
int a,b;
printf("enter the number :");
scanf("%d%d",&a,&b);
printf("substraction of the number is =%d",a-b);
}
void mul()
{
int a,b;
printf("enter the number :");
scanf("%d%d",&a,&b);
printf("multiplication of the number is =%d\n",a*b);
}
void dev()
{
int a,b;
printf("enter the number :");
scanf("%d%d",&a,&b);
printf("division of the number is =%d\n",a/b);
}
