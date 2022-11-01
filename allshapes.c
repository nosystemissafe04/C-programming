#include<stdio.h>
void main()
{
int a,c,b,pie=3.14;
for(int i; ;i++)
 {
  printf("enter the value for finding the area of circle rectangle and square 'a'\n 1 for circle \n 2 for square \n 3 for rectangle  \n press 4 to exit \n");
  scanf("%d",&a);
  switch (a)
  {
  case 1:
//  int pie=3.14;
  printf("welcome in area of circle\n");
  printf("enter the value of radius\n");
  scanf("%d",&b);
  printf("area of circle is=%d\n",pie*b*b);
  break;
  case 2:
  printf("welcome in area of rectangle \n");
  printf("enter the value of length and width\n");
  scanf("%d\n%d",&c,&b);
  printf("area of rectangle=%d\n",c*b);
  break;
  case 3:
  printf("welcome in square \n");
  printf("enter the value of side \n");
  scanf("%d",&b); 
  printf("area of square is =%d\n",b*b);
  break;
  case 4:
  break;
  }
 if(a==4)
  {
  break;
  }
 }
}
