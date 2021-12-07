/*Date:6-12-2021 | Time~1:46 PM
Grade বের করা
*/

#include<stdio.h>
int main()
{
float n;
printf("Enter Your Number:");
scanf("%f",&n);


   if(n>100 || n<0){
     printf("Please Enter a Valid Number");
   }
   else if(n>=80 && n<=100){
     printf("You Got A+");
   }
   else if(n>=70 && n<=79){
     printf("You Got A");
   }
   else if(n>=60 && n<=69){
     printf("You Got A-");
   }
   else if(n>=50 && n<=59){
     printf("You Got B");
   }
   else if(n>=40 && n<=49){
     printf("You Got C");
   }
   else if(n>=33 && n<=39){
     printf("You Got D");
   }
   else{
     printf("You Fail in the Exam");
   }



}



