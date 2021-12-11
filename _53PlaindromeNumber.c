/*Date:12-12-2021 | Time~12:20 AM

Check Palindrome Number

palindrome হলো ঐ সকল নাম্বার যাদের
reverse করলেও মান একই থাকে। যেমন 
121 কে reverse করলেও 121 ই হয়। তাই 121 একটি 
palindrome Number.

আবার 234 কে reverse করলে 432 হয় অর্থাৎ মান
change হয়ে গেছে তাই 234 palindrome 
নাম্বার নয়।
*/

#include<stdio.h>
int main()
{
int num,temp,rem,rev=0;
printf("Enter Any Number:");
scanf("%d",&num);
temp=num;

//Reverse Number
while(temp!=0){
  rem=temp%10;
  rev=rev*10+rem;//Magical Line
  temp=temp/10;
}


//Checking Palindrome
if(num==rev){//Number টা যদি reverse এর সাথে মিলে যায়
  printf("%d is a Palindrome Number",num);
}
else{
  printf("%d is not a Palindrome Number",num);
}




}






