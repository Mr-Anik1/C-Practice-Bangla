/*Date:22-11-2021
Character ইনপুট দিলে সেটা Ascii value 
তে পরিণত হবে।যেমন A ইনপুট দিলে সেটা 65 শো করবে।
*/

#include<stdio.h>
int main()
{
char ch;
printf("Enter any character:");
scanf("%c",&ch);
//%c নিয়েছি কারণ ক্যারেক্টার টাইপ ডাটা ইনপুট নিব

printf("Ascii Value is:%d",ch);
//%d দিয়েছি কারণ উক্ত ক্যারেক্টারকে ইন্টিজারে পরিণত করব

}





