#include<stdio.h>
void main()
{
int a,c,b;
for(int i; ;i++)
 {
  printf("enter the value for add sub div mul in veriable 'a'\n 1 for addition \n 2 for substraction \n 3 for multiplication \n 4 for division \n press 5 to exit \n");
  scanf("%d",&a);
  switch (a)
  {
  case 1:
  printf("welcome in addition we provide addition of 2 numbers\n");
  printf("enter the value \n");
  scanf("%d\n%d",&c,&b);
  printf("addition of two number=%d\n",c+b);
  break;
  case 2:
  printf("welcome in substraction we provide substraction of 2 numbers \n");
  printf("enter the value \n");
  scanf("%d\n%d",&c,&b);
  printf("substraction of two number=%d\n",c-b);
  break;
  case 3:
  printf("welcome in multiplication we provide multiplication of 2 numbers \n");
  printf("enter the value \n");
  scanf("%d\n%d",&c,&b); 
  printf("substraction of two number=%d\n",c*b);
  break;
  case 4:
  printf("welcome in division we provide division of 2 numbers \n");
  printf("enter the value \n");
  scanf("%d\n%d",&c,&b); 
  printf("substraction of two number=%d\n",c/b);
  break;
  case 5:
  break;
  }
 if(a==5)
  {
  break;
  }
 }
}
