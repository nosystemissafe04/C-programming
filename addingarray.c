#include<stdio.h>
void main()
{
int a;
printf("enter the number of elements you want to add:");
scanf("%d",&a);
int arr1[a];
int arr2[a];
int addition[a];
printf("enter the elements in 1st array\n");
for(int i=1;i<=a;i++)
  {
  scanf("%d",&arr1[i]);
  }
printf("enter the elements in 2nd array\n");
for(int j=1;j<=a;j++)
  {
  scanf("%d",&arr2[j]);
   }
for(int h=1;h<=a;h++)
 {
addition[h]=arr1[h]+arr2[h];
  }
printf("addition of the following array \n");
for(int k=1;k<=a;k++)
 {
 printf("%d+%d=%d\n",arr1[k],arr2[k],addition[k]);
 }
 
}
