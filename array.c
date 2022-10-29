#include<stdio.h>
void main()
{
int a;
printf("enter the amount of array:");
scanf("%d",&a);
int arr[a];
for(int i=1;i<=a;i++)
{
 scanf("%d",&arr[i]);
  }
 printf("\narrays are: \n");
for(int h=1;h<=a;h++)
  {
 printf("%d\n",arr[h]);
  }
}
