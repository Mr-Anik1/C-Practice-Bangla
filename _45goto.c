/*Date:8-12-2021 | Time~12:09 AM
goto statement

goto statement এর কাজ হলো প্রোগ্রামে
এক অংশ থেকে আরেক অংশে যাওয়ার জন্য।
*/


#include<stdio.h>
int main()
{
int i=1;

anik://label
      printf("\n%d.Hi Anik",i);
      i++;
 if(i<=10){
   goto anik;//label calling
 }
/*এখানে একটা প্রোগ্রাম তৈরী করা হয়েছে
যেখানে Hi Anik 10 বার প্রিন্ট করবে,
কিন্তু কোন লুপ চালানো হয়নি, তাহলে এটা
কাজ করল কীভাবে????

anik নামে একটা লেবেল তৈরী করা হয়েছে
এবং ঐ লেবেলের নিচে hi anik প্রিন্ট করা
হয়েছে আর i++ করা হয়েছে।তার পরেই 
কন্ডিশন দেওয়া হয়েছে i এর মান 10 সমান পর্যন্ত!

এরপরেই goto anik দেওয়া হয়েছে। যখনই 
প্রোগ্রামটা রান হবে তখন কন্ডিশন 
চেকের পর goto anik এ চলে যাবে মানে 
প্রোগ্রামটা আবার ঐ anik লেবেলে চলে 
যাবে। তারপর আবার hi anik প্রিন্ট করবে 
এবং i এর মান increase করবে। তারপর আবার 
কন্ডিশন চেক করবে এবং সব ঠিক থাকলে
পুনরায় goto statement এ চলে যাবে আর লেবেল
anik কে কল করবে এবং পুনরায় hi anik প্রিন্ট 
করবে এবং i এর মান increase করবে এটা কন্ডিশনের
শর্ত পর্যন্ত চলতেই থাকবে। 

মানে প্রোগ্রামকে এক অংশ থেকে আরেক
অংশে স্থানান্তরিত করার জন্য goto statement 
ব্যবহার করা হয়।
*/






}





