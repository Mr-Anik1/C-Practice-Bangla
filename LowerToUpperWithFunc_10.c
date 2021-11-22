/*Date:22-11-2021
lower to upper with library function 

toupper() নামক লাইব্রেরি ফাংশন ব্যবহার করে
আমরা লোয়ার কেস লেটারকে আপার কেস 
লেটারে পরিণত করব।
*/



#include<stdio.h>
int main()
{
char lower,upper;
/*lower নামক ভেরিয়েবলের মধ্যে ইউজারের কাছ থেকে
ইনপুট নিব, আর upper ভেরিয়েবলের মধ্যে toupper() এর মাধ্যমে কনভার্ট করা 
uppercase character টি নিব।
*/


printf("Enter any Lower case Character:");
scanf("%c",&lower);

upper=toupper(lower);
//convert করা ভেলু upper ভেরিয়েবলের মধ্যে রাখলাম 

printf("Upper case Character:%c",upper);

}








