/*Date:10-12-2021 | Time~5:35 PM
 গ.সা.গু(GCD) ও ল.সা.গু(LCM) নির্ণয়
 
 
 reminder=num1%num2
 num1=num2
 num2=reminder
 
প্রথমে num1%num2 করব এবং ভেলু reminder এ
রাখব।  তারপর num1 এর জায়গায় num2 রাখব 
এবং num2 এর জায়গায় reminder রাখব। 
এটা ততক্ষণ পর্যন্ত করব যতক্ষণ num2 এর মান
0 না হবে।শেষে রেজাল্ট হবে num1
 

****   56 ও 13 এর গ.সা.গু   **** 

 n1%n2=reminder
 56%13=4
 13%4=1[n1 এর জায়গায় n2(13) এবং n2 এর জায়গায় reminder(4) চলে এসেছে]
 4%1=0[আবার পুনরায় n1 এর জায়গায় n2(4) এবং n2 এর জায়গায় reminder(1) চলে এসেছে]
 1%0 [এখানে n1=1 ও n2=0,  যেহেতু n2=0 হয়ে গেছে তাই এখানেই শেষ]
 
রেজাল্ট হবে n1 অর্থাৎ GCD হবে 1 
 
 
 
 LCM=(num1*num2)/GCD
*/


#include<stdio.h>
int main()
{
int n1,n2,num1,num2,rem,gcd,lcm;
printf("Enter Number1:");
scanf("%d",&n1);
printf("Enter Number2:");
scanf("%d",&n2);

num1=n1;
num2=n2;
/*n1 ও n2 এর ভেলুর যেন কোন পরিবর্তন না
হয় সেজন্য num1 ও num2 ভেরিয়েবলের 
মধ্যে n1 ও n2 রেখে num1 ও num2 নিয়ে কাজ করব।
*/


while(num2!=0){//যতক্ষণ num2 এর মান 0 না হবে ততক্ষণ চলবে
   rem=num1%num2;
   num1=num2;
   num2=rem;
}

gcd=num1;
lcm=(n1*n2)/gcd;

printf("GCD is:%d",gcd);
printf("\nLCM is:%d",lcm);


}

