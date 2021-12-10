/*Date:10-12-2021 | Time~7:37 PM

কোন বড় সংখ্যার প্রত্যেকটা ডিজিটের যোগফল




** 123 নাম্বারটির প্রত্যেকটা ডিজিটের যোগফল  **

প্রথমবারঃ-

r=num%10
3=123%10
sum=sum+r[0+3=3]
num=num/10
12=123/10 [এখনে মুল[123] নাম্বারকে ১০ দ্বারা ভাগ করলাম আর নতুন নাম্বার ১২ পেলাম]



দ্বিতীয়বারঃ-

r=num%10
2=12%10[যেহেতু নাম্বার এখন 12 হয়ে গেছে]
sum=sum+r 
5=3+2 [কারণ প্রথমবার sum=3 হয়েগেছিল]
num=num/10
1=12/10[এখনে নাম্বারকে[12] 10 দ্বারা ভাগ করলাম আর নতুন নাম্বার 1 পেলাম]



তৃতীয়বারঃ-

r=num%10
1=1%10[যেহেতু নাম্বার এখন 1 হয়ে গেছে]
sum=sum+r 
6=5+1 [কারণ দ্বিতীয়বার sum=5 হয়ে গেছিল]
num=num/10
0=1/10[এখনে নাম্বারকে[1] 10 দ্বারা ভাগ করলাম আর নতুন নাম্বার 0 পেলাম]


যখনই নাম্বার 0 হয়ে যাবে তখনই কাজ বন্ধ হয়ে যাবে।
*/

#include<stdio.h>
int main()
{
int num,temp,rem,sum=0;
printf("Enter Any Large Number:");
scanf("%d",&num);

temp=num;
//num টা temp এর মধ্যে রাখলাম এখন সকল কাজ temp দ্বারা করব।

while(temp!=0){//যতক্ষণ temp এর মান 0 না হবে ততক্ষণ চলতে থাকবে।
   rem=temp%10;
   sum+=rem;
   temp=temp/10;
}

printf("\n%d Individual Digit Sum is:%d",num,sum);

}
