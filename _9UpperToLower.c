/*Date:22-11-2021
Upper Case to Lower Case

lower case এ a এর ভেলু 97
Upper case এ A এর ভেলু 65
তাহলে lower to upper এর পার্থক্য 97-65=32

এখন যদি Upper case এর কোন লেটারকে 
Lower Case এ পরিণত করতে চাই তাহলে, 
Upper Case এর সাথে 32 যোগ করে দিলেই
সেটা lower case এ পরিণত হবে


যেমন A input দিলে এর ভেলু 65, এখন যদি A এর মানের
সাথে 32 যোগ করি তাহলে সেটা 97 হবে মানে 
small a এর মান।
*/


#include<stdio.h>
int main()
{
	
char upper;
printf("Enter any upper case character:");
scanf("%c",&upper);

printf("Lower case character:%c",upper+32);

}
