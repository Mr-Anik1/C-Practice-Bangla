/*Date:22-11-2021
Lower Case to Upper Case

lower case এ a এর ভেলু 97
Upper case এ A এর ভেলু 65
তাহলে lower to upper এর পার্থক্য 97-65=32

এখন যদি lower case এর কোন লেটারকে 
আপার কেস এ পরিণত করতে চাই তাহলে, 
লোয়ার কেস থেকে 32 মাইনাস করে দিলেই
সেটা আপার কেস এ পরিণত হবে


যেমন a input দিলে এর ভেলু 97, এখন যদি a এর মান
থেকে 32 বিয়োগ করি তাহলে সেটা 65 হবে মানে 
ক্যাপিটাল A এর মান।
*/


#include<stdio.h>
int main()
{
	
char lower;
printf("Enter any lower case character:");
scanf("%c",&lower);

printf("Upper case character:%c",lower-32);

}
