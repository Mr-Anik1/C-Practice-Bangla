/*Date:7-12-2021 | Time~12:27 PM

Bitwise Operator:

&  Bitwise AND
|    Bitwise OR
^    Bitwise Exclusive OR
~   Bitwise NOT

Bitwise Operator মূলত বিট নিয়ে কাজ করে।
যদি ২ টি সংখ্যার Bitwise AND করি তাহলে 
সংখ্যা দুটির বাইনারি মান বের করে সেগুলো
গুণ করবে, তারপর রেজাল্ট শো করবে।
*/


#include<stdio.h>
int main()
{
int n1,n2,result;
printf("Enter Two Nunbers:");
scanf("%d %d",&n1,&n2);

result=n1&n2;
/*এখানে n1 এবং n2 এর Bitwise AND করা হয়েছে।

ধরি n1=32 এবং n2=16
প্রথমেই 32 এবং 16 কে ৮ বিট বাইনারিতে 
পরিণত করবে।তারপর 32 & 16 এর বাইনারী 
মানগুলোর মধ্যে গুণ(AND) করবে।

32= 0 0 1 0 0 0 0 0
16= 0 0 0 1 0 0 0 0
--------------------------------
        0 0 0 0 0 0 0 0
        
এখনে 32 এর প্রথম বিট 0 এবং 16 এর প্রথম বিট 0
তাই গুণ করলে হবে 0
তারপর দ্বিতীয় বিট,তৃতীয় বিট এরকম গুণ
হবে। দিনশেষে রেজাল্ট আসে 0        
      
*/
printf("Bitwise AND Result is:%d",result);


result=n1|n2;
/*এখানে n1 এবং n2 এর Bitwise OR করা হয়েছে।

ধরি n1=32 এবং n2=16
প্রথমেই 32 এবং 16 কে ৮ বিট বাইনারিতে 
পরিণত করবে।তারপর 32 & 16 এর বাইনারী 
মানগুলোর মধ্যে বাইনারী যোগ(OR)  করবে।

32= 0 0 1 0 0 0 0 0
16= 0 0 0 1 0 0 0 0
--------------------------------
        0 0 1 1 0 0 0 0
       
0 ও 0 যোগ করলে 0 হয়
0 ও 1 যোগ করলে 1 হয় 
1 ও 1 যোগ করলে 10 হয়

ফলে রেজাল্ট আসে 48

*/

printf("\nBitwise OR Result is:%d",result);



result=n1^n2;
/*Exclusive OR এর শর্ত হলো যখন ২ টি বিট একই
রকম হবে তখন 0 বসিয়ে দিবে।আর এক রকম না হলে
1 বসাবে।


32= 0 0 1 0 0 0 0 0
16= 0 0 0 1 0 0 0 0
--------------------------------
        0 0 1 1 0 0 0 0

এখানে 32 এবং 16 উভয়েরই প্রথম বিট 0 তাই 
0 বসিয়ে দিয়েছে। তারপর 32 এর ৫তম বিট 0 এবং 
16 এর ৫তম বিট 1 তারমানে একই রকম বিট না 
তাই 1 বসিয়েছে।


*/



printf("\nBitwise Exclusive OR Result is:%d",result);
}





