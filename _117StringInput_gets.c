/*Date:28-12-2021 | Time~11:31 PM

scanf() alternative gets()/fgets()
printf() alternative puts()

gets() স্ট্রিং রিড করার পরেই কেবলমাত্র puts() স্ট্রিং প্রিন্ট করে।

এখনকার C Standard এ gets() কে তুলে দেওয়া
হয়েছে কারণ এখানে ইচ্ছামতো লাইন লিখা 
যায়,কোন সাইজ সেট করতে হয় না।ফলে একটা 
প্রবলেম হয় buffer overflow.

এই সমস্যা সমাধানে fgets() ব্যবহার করা হয়।
*/

#include<stdio.h>
int main()
{
char str1[1000],str2[1000];
/*
printf("Write Something [ Input With Scanf() ]:");
scanf("%s",&str1);
/*এখানে %s ব্যবহার করেছি কারণ স্ট্রিং ইনপুট নিব।

scanf() সাহায্যে কোন কিছু ইনপুট নিলে সমস্যা হলো,
কোন শব্দ লিখার পর যে স্পেস দেওয়া হয় তারপর
আর কাজ করে না। মানে স্পেসের পরের অংশ
 ইনপুট নিবে না,ফলে সঠিক রেজাল্ট আসবে না।

printf("\nResult With Scanf():-\n%s",str1);

*/





//উক্ত সমস্যার সমাধান
printf("Write Something [ Input With gets() ]:");

gets(str2);//str2 এর মধ্যে ইনপুট নিলাম
/*gets() ব্যবহারের কারণে এখন স্পেসের পরের 
অংশও ভালোভাবে প্রিন্ট হয়।
*/
printf("\nResult: %s",str2);//প্রিন্ট str2




//print with puts() function 
printf("\n\n★Print with puts() function★");
printf("\nWrite Something [Print with puts() ]:");
gets(str1);
printf("\nResult: ");
puts(str1);//puts এর মাধ্যমে প্রিন্ট করলাম।





//fgets() এর ব্যবহার
printf("\n\n★fgets() এর ব্যবহার★");
char fStr[1000];
printf("\nWhat do you think: ");
fgets(fStr, sizeof(fStr), stdin); // read string
/*fgets() function এ তিনটি প্যারামিটার,

প্রথমটা:- স্ট্রিংটা যে variable এ স্টোর করা 
হয়েছে সেটা, এখানে fStr

দ্বিতীয়টা:-উক্ত ভেরিয়েবলটার সাইজ sizeof(fStr) 
সাইজ সেট করার ফলে এখানে এর বেশি লিখা 
যাবে না। 

তৃতীয়টা:-stdin

*/
printf("\nResult:-");
puts(fStr);//Display String
    
    
    
    
    
}