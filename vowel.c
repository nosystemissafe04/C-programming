#include<stdio.h>
void main()
{
int a;
char n;
printf("enter the charachter:");
scanf("%c",&n);
a=n;
if(a>=65 && a<=124)
 {
  if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')  
  { 
printf("the charachter is vowel:%c\n",n); 
  } 
  else if (n=='A'|| n=='E' || n=='I' || n=='O' || n=='U') 
  {
printf("the charachter is vowel:%c\n",n);
  }
  else 
  { 
  printf("the char is a consonent:%c\n",n);
  }
}
 else
{
printf("the char is not a alphabet:%d\n",n);
}

}
