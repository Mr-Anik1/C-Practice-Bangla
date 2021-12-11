/*Date:12-12-2021 | Time~1:12 AM
Check Armstrong Number

কোন নাম্বার Armstrong কিনা সেটা বুঝা
যাবে ঐ নাম্বাটির প্রতিটি ডিজিটের 
কিউবের মানের যোগফল যদি উক্ত নাম্বারটির
সমান হয় তাহলে সেটা Armstrong Number.


যেমন 153 এর প্রতিটি ডিজিটের কিউব হলোঃ
1^3=1
5^3=125
3^3=27
total=1+125+27=153

সুতরাং দেখা গেল 153 এর প্রতিটি 
ডিজিটের কিউবের মানের টোটাল যোগফল
153 হয়, তাই 153 Armstrong Number.
*/

#include<stdio.h>
int main()
{
int num,temp,rem,pow3,armstrongSum=0;
printf("Enter Any Number:");
scanf("%d",&num);
temp=num;

while(temp!=0){
   rem=temp%10;
   armstrongSum+=rem*rem*rem;
   //যেহেতু প্রতিটা ডিজিটের কিউব করা লাগবে।
   temp=temp/10;
}

if(armstrongSum==num){
  printf("%d is a Armstrong Number",num);
}
else{
  printf("%d is not a Armstrong Number",num);
}




}












