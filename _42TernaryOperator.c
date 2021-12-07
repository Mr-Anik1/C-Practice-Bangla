/*Date:7-12-2021 | Time~12:09 PM

Ternary Operator
(condition) ? First : Second

Ternary operator এর তিনটি অংশ থাকে, যদি 
কন্ডিশন সত্য হয় তাহলে First প্রিন্ট হবে।
মিথ্যা হলে Second প্রিন্ট হবে।
*/


#include<stdio.h>
int main()
{
int n1,n2,large;
printf("Enter Two Numbers:");
scanf("%d %d",&n1,&n2);

large=(n1>n2)?n1:n2;//ternary operator
printf("Large Number:%d",large);

}





