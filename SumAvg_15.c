/*Date:23-11-2021
sum & average বের করা।
*/


#include<stdio.h>
int main()
{
int num1,num2,sum;
float avg;
/*
কোন কিছুর average বের করলে সেটা দশমিকেও আসতে
পারে,তাই এখানে ফ্লোটিং টাইপ নেওয়া হয়েছে।
*/

printf("Enter Two Integer Numbers:");
scanf("%d %d",&num1,&num2);
sum=num1+num2;
//sum ভেরিয়েবলের মধ্যে num1 ও num2 যোগ করে রাখলাম

printf("Sum is:%d",sum);



/***  **Average বের করা**  */

avg=(float)sum/2;//type custing

/*
যদি দুইটি integer এর ভাগ করা হয় তাহলে ফলাফলও 
integer এ আসবে। যেহেতু এখানে sum ও একটা integer 
আর 2 ও একটা integer তাই রেজাল্ট integer এ আসত। ফলে
7/2 দিলে রেজাল্ট আসত 3 যা সঠিক না। সঠিক রেজাল্ট 3.5

আর যদি একটা float আর একটা integer এর ভাগ করা হয় 
তাহলে রেজাল্ট আসবে floting Number তাই,
সঠিক রেজাল্ট পাওয়ার জন্য sum অথবা 2 এর যেকোন
একটার টাইপ চেঞ্জ করে float করে দিতে হবে। আর এই টাইপ
চেঞ্জ করাকে বলা হয় type custing

একারণেই sum এর আগে ব্রাকেট দিয়ে float লিখা হয়েছে।
*/

printf("\n\nAverage is:%.2f",avg);

}







