/*Date:23-11-2021
Sum,Sub,Mul,Div, Reminder বের করার প্রোগ্রাম 
*/


#include<stdio.h>
int main()
{
int num1,num2;
float result;

printf("Enter Two Integer Numbers:");
scanf("%d %d",&num1,&num2);

//sum
result=num1+num2;
printf("\nSum is:%.2f",result);

//sub
result=num1-num2;
printf("\nSub is:%.2f",result);

//Mul
result=num1*num2;
printf("\nMul is:%.2f",result);

//Div
result=(float)num1/num2;
printf("\nDiv is:%.2f",result);

//Reminder
result=num1%num2;
printf("\nReminder is:%.2f",result);

}


