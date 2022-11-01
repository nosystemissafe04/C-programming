#include<stdio.h>
void main()
{
int a;
printf("enter the number of array you want to declare:");
scanf("%d",&a);
int arr[a];
for(int i=1;i<=a;i++)
 { 
 scanf("%d",&arr[i]);
 }
printf("reversing the array by simply reversing the loop:\n");
for(int j=a;j!=0;j--)
  {
printf("%d\n",arr[j]);
  }
}
