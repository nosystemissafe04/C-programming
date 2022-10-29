#include<stdio.h>
void main()
{
int c;
for(int i=0;i<=10;i++)
 {
 if(i%2==0)
  {
  printf("%d\n",i);
  c+=i;
  }
  
 }
 printf("sum of even numbers =%d",c);
}
