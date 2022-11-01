#include<stdio.h>
void main()
{
int a,j,num=0,pal;
printf("enter the number :");
scanf("%d",&a);
pal=a;
for(j=0;a!=0;a=a/10)
 {
 num=num*10;
 num=num+a%10;
 }
 printf("reverse=%d\n",num);
if(pal==num){
printf("The number is palendrome number\n");
}
else if(pal!=num)
{
printf("The number is not palendrome number \n");
}
}
