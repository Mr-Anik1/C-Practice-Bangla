/*Date:7-12-2021 | Time~11:47 PM
Continue & break statement 
*/

#include<stdio.h>
int main()
{


for(int i=1;i<=20;i++){
   if(i==10){
   	continue;
   }
   /*continue statement এর কাজ হলো যেটা কন্ডিশনে
দিবে ওটা স্কিপ করে পরের ধাপে চলে যাবে।
যেমন এখানে i এর মান 10 দিয়ে continue করতে
বলা হয়েছে, মানে যখন i এর মান 10 হবে তখন ঐ 
10 স্কিপ করে পুনরায় লুপে চলে যাবে এবং 
পরের ধাপ 11 থেকে প্রিন্ট করা শুরু করবে।
   */
   printf("\n%d.Anik",i);
   
   if(i==18){
     break;
   }
/*break statement এর কাজ হলো কন্ডিশনে যেটা 
দিবে ঠিক ওখান থেকেই লুপটা ব্রেক করে দিবে।
যেমন এখানে i এর মান 18 হলে লুপটা ব্রেক 
হয়ে যাবে আর চলবে না।
*/
}



}

