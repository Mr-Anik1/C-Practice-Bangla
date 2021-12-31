/*Date:30-12-2021 | Time~6:09 PM

★concat string with strcat() function★
*/

#include<stdio.h>
int main()
{
char str1[ ]="My name is ";
char str2[ ]="Anik";

strcat(str1,str2);
/*strcat() এর দুইটি প্যারামিটার থাকে।

প্রথম প্যারামিটারে যার সাথে concat করব 
সেটা বসাতে হয়,যেমন এখানে str1 এর সাথে 
concat করব তাই প্রথম অংশে str1 দেওয়া হয়েছে।

দ্বিতীয় প্যারামিটারে যাকে concat করব
সেটা বসাতে হয়।যেমন এখানে str2 কে concat করব
তাই দ্বিতীয় অংশে str2 দেওয়া হয়েছে।
*/

printf("Result: %s", str1);
/*যেহেতু str1 এর সাথে concat করব তাই রেজাল্ট 
str1 এ স্টোর হবে, তাই এখানে str1 প্রিন্ট করেছি।
*/







//String concat without strcat() function 
char str3[ ]="The name of my ";
char str4[ ]="country is Bangladesh";

//str3 এর লেন্থ বের করলাম
int len=(sizeof(str3)/sizeof(str3[0]))-1;//1 বিয়োগ করা হয়েছে '\0' কে বাদ দেওয়ার জন্য।


int i=0;
while(str4[i]!='\0'){
   str3[len+i]=str4[i];
/*str3 এর লেন্থের শেষ থেকে str4 এর item গুলো
বসতে থাকবে।
*/
   i++;
}

printf("\n\nResult is: %s", str3);









}





