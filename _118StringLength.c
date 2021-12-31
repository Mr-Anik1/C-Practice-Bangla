/*Date:30-12-2021 | Time~1:29 PM

★strlen() function ব্যবহার করে কোন স্ট্রিং এর লেন্থ বের করা৷ 


Note that the strlen() function doesn't count the null character '\0' while calculating the length.
*/
#include<stdio.h>
int main()
{
char str[ ]="My name is Anik";

//string length using strlen() function 
int length=strlen(str);//strlen এর ব্যবহার
printf("Length is:%d",length);




//while loop দিয়ে স্ট্রিং এর লেন্থ বের করা
int i=0,len=0;
while(str[i]!='\0'){//str[i] এর মান যতক্ষণ null না হবে ততক্ষণ চলবে। 
   len++;//loop চললেই len মান এক এক করে বাড়বে
   i++;
}
printf("\nLength Using Loop:%d",len);//len print

/*কোন স্ট্রিং যখন লিখি তখন এর শেষ ভেলু 
অটোমেটিক null সেট হয়, আর null কে '\0' দ্বারা প্রকাশ করা হয়।

যেমন "Anik" স্ট্রিং টাতেঃ-
str[0]="A"
str[1]="n"
str[2]="i"
str[3]="k"
str[4]='\0'

অর্থাৎ এর শেষ ভেলু '\0' 

*/




//String Length Using sizeof
printf("\n\n★String Length Using Sizeof★");
int strLen=sizeof(str)/sizeof(str[0]);
printf("\nLength:%d",strLen-1);
/*1 minus(-) করেছি কারণ স্ট্রিং এর শেষে অটোমেটিক বসা null '\0' কে বাদ দেওয়ার জন্য।
*/






}