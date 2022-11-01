#include<stdio.h>
#include<stdlib.h>
void square();//global function so that every one should call it 
void main()
{
square();//calling of function and control goes to the function void square
}
void square()//function definition
{
int a,b;//local veriable
float c;
char option;//local veriable
printf("enter choice \n1> integer\n2>float\n");
scanf("%d",&a);
switch (a)
{
case 1:
printf("enter the number :");//calling of printf function
scanf("%d",&a);//calling of scanf function
printf("square of the given number is =%d\n",a*a);//calculating the number
printf("Press 'y' to continue and press 'n' to exit or press ctrl+c to terminate the program\n");//getting the value in the veriable option 
getchar();//getchar function is used in linux to get the input in character veriable
scanf("%c",&option);

break;
case 2:
printf("enter the number :");//calling of printf function
scanf("%f",&c);//calling of scanf function
printf("square of the given number is =%f\n",c*c);//calculating the number
default:
printf("Press 'y' to continue and press 'n' to exit or press ctrl+c to terminate the program\n");//getting the value in the veriable option 
getchar();//getchar function is used in linux to get the input in character veriable
scanf("%c",&option);
}
if(option=='y'||option=='Y')//if condition to perform the loop of calling the function again and again 
 { 
 do//do while is my choise you can make it happen in any of the loop 
   { 
   square();//function calling itself in a loop maybe its a recursion
   }while(1);//we have integer value so that the loop can go on in infinity
 }
else if(option=='n'||option=='N') /*else if condition for exitting the loop by exiting the loop it will not call itself 
                                    the memory will be freed*/
exit(0);//exit is a function which is in haeder file stdlib.h
}
