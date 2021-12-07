/*Date:5-12-2021 | Time~8:22 PM

Vowel নাকি Consonant সেটা বের করার প্রোগ্রাম।

Logical OR || ব্যবহার করে।
*/


#include<stdio.h>
int main()
{
char ich,ch;
printf("Enter Any Letter:");
scanf("%c",&ich);

ch=tolower(ich);
/*এর ফলে যাই ইনপুট নিই না কেন সেটা লোয়ার
কেস এ পরিণত হবে, ফলে রেজাল্টে কোন গড়মিল 
হবে না।
*/

  if(ch<'a' || ch>'z'){
    printf("%c is Not a Letter",ich);
    //লেটার কিনা চেক করে নিলাম
  }
  else if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
    printf("%c is Vowel",ich);
  }
  else{
    printf("%c is Consonant",ich);
  }
/*ich দেওয়ার কারণ হলো যেরকম ইনপুট নিয়েছি
ঠিক ওরকমই যেন প্রিন্ট হয়। লোয়ার কেসে
ইনপুট নিলে লোয়ার কেসে প্রিন্ট হবে আর 
আপার কেসে ইনপুট নিলে আপার কেসে 
প্রিন্ট হবে। 
  */



}