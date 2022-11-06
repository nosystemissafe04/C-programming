#include<stdio.h>
void main()
{
int arr[3][3],add[3][3];
printf("enter the elements in array 1:\n");
for(int i=0;i<3;i++)
  {
   for(int j=0;j<3;j++)
    {
    scanf("%d",&arr[i][j]);
    }
  }
printf("first 3x3 array:\n");
for(int i=0;i<3;i++)
  { 
   for(int j=0;j<3;j++)
    { 
    printf("%d",arr[i][j]);
    }
 printf("\n");
  }
printf("enter the elements in array 2:\n");
for(int i=0;i<3;i++)
  {
   for(int j=0;j<3;j++)
    {
    scanf("%d",&add[i][j]);
    }
  }
printf("second 3x3 array:\n");
for(int i=0;i<3;i++)
  { 
   for(int j=0;j<3;j++)
    { 
    printf("%d",add[i][j]);
    }
 printf("\n");
  }
printf("addition of the following array :\n");
 for(int h=0;h<3;h++)
  {
   for(int z=0;z<3;z++)
     {
     printf(" %d\t ",arr[h][z]+add[h][z]);
     }
  printf("\n");
  }
}
