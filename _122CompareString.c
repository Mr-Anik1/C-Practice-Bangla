/*Date:30-12-2021 | Time~6:39 PM

★String Compare with strcmp()★
strcmp() এর প্যারামিটারে স্ট্রিং দুটি দিতে 
হবে, পরে যদি 0 রিটার্ন করে তাহলে স্ট্রিং দুটি
সমান।আর না করলে অসমান।
*/

#include<stdio.h>
int main()
{
char str1[ ]="Anik";
char str2[ ]="Anik";

int returnVal=strcmp(str1,str2);//Equal হলে 0, নাহলে অন্যকিছু

int isEqual=(returnVal==0)?"Equal":"Not Equal";
printf("%s",isEqual);



}





