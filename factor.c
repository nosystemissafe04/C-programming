#include<stdio.h>
void main()
{
int a,store;
printf("enter the number :");
scanf("%d",&a);
printf("Factors:\n");
for(int i=1;i<=a;i++)
  {
  if(a==i)
   {
   store=a;
   printf("%d\n",store);
   }
 else if(a%i==0)
  {
    store=i%a;
 printf("%d\n",store);
  }  
}

}
