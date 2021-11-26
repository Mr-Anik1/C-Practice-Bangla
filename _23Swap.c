/*Date:26-11-2021 | Time~12:40 PM

2 টি নাম্বারের সোয়াপ করা।
সোয়াপ মানে হলো একটার ভেলু আরেকটায় বসে যাবে।
*/

#include<stdio.h>
int main()
{
int num1=10,num2=20,temp;

temp=num1;//ফলে temp=10
/*temp নামক ফাঁকা ভেরিয়েবলের মধ্যে num1 এর
ভেলু রাখলাম সুতরাং এখন temp=10 হয়ে যাবে।
*/
num1=num2;//ফলে num1=20
/*num1 ভেরিয়েবলের মধ্যে num2 এর ভেলু রাখলাম,
ফলে এখন num1=20 হয়ে যাবে।
*/
num2=temp;//ফলে num2=10
/*এখন num2 এর মধ্যে ঐ temp ভেরিয়েবলটা রাখলাম
ফলে num2=10 হয়ে যাবে। কারণ প্রথমে ফাকা temp
ভেরিয়েবলের মধ্যে num1 এর ভেলু রেখেছিলাম। আর 
তখন temp এর মান হয়ে গিয়েছিল 10 যা ছিল num1 এর মান।
*/



printf("Number One:%d",num1);
printf("\nNumber Two:%d",num2);







/*
  **  **তিনটি সংখ্যার সোয়াপ**   **


#include<stdio.h>
int main()
{
int aa=10,bb=20,cc=30,temp;
temp=aa;//temp=10
aa=bb;//aa=20
bb=cc;//bb=30
cc=temp;//cc=10
printf("aa:%d bb:%d cc:%d",aa,bb,cc);
}
রেজাল্টঃ aa:20 bb:30 cc:10

*/





}