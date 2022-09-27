#include<stdio.h>
void main()
{
int a,b;
char ans;
printf("enter the value of a and b\n");
scanf("%d%d",&a,&b);
printf("a+b=%d\n",a+b);
printf("press 'y' to continue to substraction\n");
getchar();
scanf("%c",&ans);
if(ans=='y'||ans=='Y')
 {
 printf("enter the value of a and b \n");
 scanf("%d %d",&a,&b);
 printf("a-b=%d\n",a-b);
  }
 printf("enter 'y' to continue to multiplication\n");
 getchar();
scanf("%c",&ans);
 if(ans=='y'||ans=='Y')
  {
  printf("enter the value of a and b \n");
  scanf("%d %d",&a,&b);
  printf("a*b=%d\n",a*b);
  }
 printf("enter 'y' to continue to division\n");
 getchar();
 scanf("%c",&ans);
 if(ans=='y'||ans=='Y')
 {
  printf("enter the value of a and b\n ");
  scanf("%d %d",&a,&b);
  printf("a/b=%d\n",a/b);
  }
  
}

 
