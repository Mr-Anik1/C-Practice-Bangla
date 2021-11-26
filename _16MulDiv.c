/*Date:23-11-2021
Sum,Sub,Mul,Div বের করার প্রোগ্রাম 
*/


#include<stdio.h>
int main()
{
float num1,num2,result;

printf("Enter Two Numbers:");
scanf("%f %f",&num1,&num2);

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
result=num1/num2;
printf("\nDiv is:%.2f",result);

}




