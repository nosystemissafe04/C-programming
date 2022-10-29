#include<stdio.h>
void array(int[],int);
void main()
{
int a;
printf("enter the amount of array:");
scanf("%d",&a);
int arr[a];
array(arr,a);
}
void array(int x[],int y)
{

for(int i=0;i<y;i++)
 {
 scanf("%d",&x[i]);
 }
printf("\n");
for(int j=0;j<y;j++)
 { 
  printf("%d\n",x[j]);
 }
}
