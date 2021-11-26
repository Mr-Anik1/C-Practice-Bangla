/*
 Date:21-11-2021
Topic: Data Types 

keyword   ------   Format Specifier 
   int          -------      %d
   float       -------      %f
   double   -------      %lf
   char        ------       %c
*/


#include<stdio.h>
int main()
{
	int num1=20, num2=5;
	/*
	 ভেরিয়েবলগুলো একই ডাটা টাইপের হলে সেগুলো এক লাইনে লিখা যায়। যেমন এখানে num1 & num2 দুটোই integer type data, তাই এক লাইনে লিখেছি
	*/
	
	
	
	float num3=34.5;
	double num4=22.797891;
	char ch='a';
/*
character type data সবসময় single কোটেশনের মধ্যে লিখতে হয়, তাই এখানে ch ভেরিয়েবলের মধ্য a সিঙ্গেল কোটেশনের মধ্যে লিখেছি।
*/
	
	
	
	
	
/*   ****Integer Number Start****   */

printf("First Number is:%d",num1);



//num1 & num2 একসাথে প্রিট করা
printf("\nNumbers are:%d & %d",num1,num2);
/*
যেহেতু আমরা ইন্টিজার টাইপ ডেটা শো করব তাই %d দিয়েছি।এখানে প্রথম %d num1 কে ইঙ্গিত করবে এবং  দ্বিতীয় %d num2 কে ইঙ্গিত করবে।
*/

/*   ****Integer Number End****   */










/*   ****Floating Number Start****   */

printf("\nFloating Number is:%f",num3);
/*
এখানে float type data ব্যবহার করেছি তাই %f দিয়েছি। কিন্তু আমাদের রেজাল্ট শো করার কথা 34.5 কিন্তু শো করেছে 34.500000 অর্থাৎ 5 এর পর আরও 5 টা শূণ্য। কারণ ফ্লোটিং টাইপ ডেটাতে দশমিকের পর 6 ঘর পর্যন্ত নিতে হয়।তাই 5 এর পর বাকি ঘরগুলো শূন্য দ্বারা পূরণ করেছে।
*/




printf("\nAbsolute Floating Number is:%.1f",num3);
/*
এখানে রেজাল্ট ঠিকই 34.5 শো করেছে কারণ আমরা এখানে 1 ঘর পর্যন্ত সেট করে দিয়েছি। %এর পর দশমিক 1  (%.1f)  দেওয়ার মানে হলো দশমিকের পর 1 ঘর পর্যন্ত গণনা করবে। যদি 2 ঘর পর্যন্ত নিতে চাইতাম তাহলে % এর পর দশমিক 2 মানে %.2f দিতাম।
*/


/*   ****Floating Number End****   */








/*   ****Double Number Start****   */

printf("\nDouble Number is:%lf",num4);
/*
Double data type হওয়ার কারণে %lf দেওয়া হয়েছে।
*/


/*   ****Double Number End****   */







/*   ****Character Type  Start****   */

printf("\nCharacter  is:%c",ch);
/*
char data type হওয়ার কারণে %c দেওয়া হয়েছে।
*/


/*   ****Character Type  End****   */






/*সবগুলো একসাথে*/

printf("\n\nAll Data types are=> Integer Numbers:%d,%d & Floating Number:%.1f & Double Number:%lf & Character:%c ",num1,num2,num3,num4,ch);





}


