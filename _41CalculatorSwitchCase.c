/*Date:7-12-2021 | Time~12:35 AM
switch case ব্যবহার করে সিম্পল ক্যালকুলেটর।
*/


#include<stdio.h>
int main()
{

char ch;
float num1,num2;

printf("Enter Operator[ + - * / ]:");
scanf("%c",&ch);
printf("Enter Two Numbers:");
scanf("%f %f",&num1,&num2);

switch(ch){
   case '+':
      {
      printf("%.2f+%.2f Addition is:%.2f",num1,num2,num1+num2);
      }
    break;
    
    case '-':
      {
      printf("%.2f-%.2f substraction is:%.2f",num1,num2,num1-num2);
      }
    break;
    
    case '*':
      {
      printf("%.2f*%.2f Multiplication is:%.2f",num1,num2,num1*num2);
      }
    break;
    
    case '/':
      {
      printf("%.2f/%.2f Division is:%.2f",num1,num2,num1/num2);
      }
    break;
    
    default:
       printf("Please Enter Valid Operator");

}

}