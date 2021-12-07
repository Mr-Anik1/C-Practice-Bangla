/*Date:4-12-2021 | Time~2:59 PM
increment ++[1 করে বৃদ্ধি]
decrement --[1 করে হ্রাস]

*/


#include<stdio.h>
int main()
{
int a=10;
printf("Post Increment:%d",a++);//a=10
/*post increment এ প্রথমেই ভেলু এক বাড়বে না।
পরেরবার যখন প্রিন্ট হবে তখন ভেলু এক বাড়বে।
তাই এখানে প্রথমে a এর মানের কোন পরিবর্তন
 হয়নি 10 ই আছে।
*/
printf("\nNext Print:%d",a);//a=11
/*পরেরবার যখন a প্রিন্ট হয়েছে তখন post 
increment এর নিয়াম অনুযায়ী মান ১ বেড়েছে।
*/


printf("\nPre Increment:%d",++a);//a=12
/*pre increment এ প্রথমেই ভেলু এক বাড়ে যাবে।
*/
printf("\nNext Print:%d",a);//a=12



printf("\n\nPost Decrement:%d",a--);//a=12
/*post decrement এর নিয়ম অনুযায়ী প্রথমবার মানের
কোন পরিবর্তন হবে না, পরেরবার ১ কমবে।
*/
printf("\nNext Print:%d",a);//a=11

printf("\nPre Decrement:%d",--a);//a=10
printf("\nNext Print:%d",a);//10

}
