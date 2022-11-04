#include<stdio.h>
void main()
{
int arr[5],i,a,h,j;
printf("enter the elements in array\n");
for(i=0;i<5;i++)
 {
scanf("%d",&arr[i]);
 }
for(h=0;h<5;h++)
 {
 a=0;
 for(j=0;j<5;j++)
  {
 if(arr[h]>arr[j])
   {
   a++;
   }
  }
  if(a==4)
   {
   printf("maximum element in this array is :%d",arr[h]);
   }
 }
}
