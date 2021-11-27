/*Date:27-11-2021 | Time~11:40 AM

square root বের করা 
c programming এ স্কয়ার রুট বের করার জন্য 
sqrt() লাইব্রেরি ফাংশন ব্যবহার করা হয়। 
আর sqrt() সবসময় double type এর ভেলু রিটার্ন করে।
*/

#include<stdio.h>
#include<math.h>
int main()
{
int n;
double result;
/*sqrt সবসময় double type এর ভেলু রিটার্ন করে।
আর এখানে result ভেরিয়েবলের মধ্যে sqrt করব।
*/

printf("Enter Number:");
scanf("%d",&n);

result=sqrt(n);

printf("Square Root:%.2lf",result);
/*%lf ব্যবহার করেছি কারণ result double type 
এর ভেলু রিটার্ন করবে।
*/

}





