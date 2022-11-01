//TAKES NOTHING RETURNS NOTHING PROGRAM
#include<stdio.h>
void add(); /*global function (global identifier) 
             can be accessed from any of the
             function in the program 
            declaration of the function
             void is a returntype we have to
             specify the return type void 
            when we are using
             takes nothing returns nothing */

int main() /*here main is the function where 
            execution of the program starts*/ 
{
add();   //function calling 
return 0;  //returning 0 ,0 is a integer here
}
void add() //function definition
{
int a,b;
printf("enter the number:"); /*calling printf function which is in haeder 
                            file stdio.h haeder file contain the declaration
                             or prototype of the function printf and the 
                             definition of printf function is in C
                              library file */
scanf("%d\n%d",&a,&b);
printf("addition=%d\n",a+b);
}
