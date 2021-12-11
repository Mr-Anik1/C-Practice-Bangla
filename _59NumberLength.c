/*Date:12-12-2021 | Time~3:29 AM

একটি নাম্বারে কয়টা ডিজিট আছে 
সেটা বের করা। 


***  যেমন 145 এর ডিজিট সংখ্যা বা লেন্থ বের করা  ***

1st iteration এঃ-
n=n/10
14=145/10 [ n এখন 14 হয়ে গেল] 
সাথে সাথে count++ হয়ে যাবে মানে 
count=1 হয়ে গেল


2nd Iteration এঃ-
n=n/10
1=14/10 [ n এখন 1 হয়ে গেল ]
সাথে সাথে count++ হয়ে যাবে মানে 
count=2 হয়ে গেল


3rd Iteration এঃ-
n=n/10
0=1/10[ n এখন 0 হয়ে গেল ]
সাথে সাথে count++ হয়ে যাবে মানে 
count=3 হয়ে গেল

যেহেতু এখন n=0 হয়ে গেছে তাই লুপ স্টপ
হয়ে যাবে। ফলে রেজাল্ট হলো count 
এর ভেলু মানে 3 


ফল দাড়ায় 145 এ 3 টি ডিজিট আছে।
*/


#include<stdio.h>
int main()
{
int num,n,count=0;
printf("Enter Any Number:");
scanf("%d",&num);
n=num;

while(n!=0){
  n=n/10;
  count++;
}

printf("%d Number length:%d",num,count);




}