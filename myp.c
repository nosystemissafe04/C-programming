#include<stdio.h>
void main()
{
int n=7;
for(int i=8;i>=1;i-=2)
  {
  for(int j=1;j<=i;j++)
    {
    printf("%d",j);
    }
   printf("\n");
  for(int m=n;m>=1;m--)
      {
     printf("%d",m);
      }
   printf("\n");
   n-=2; 
   }
}
