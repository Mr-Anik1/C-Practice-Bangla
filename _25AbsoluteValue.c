/*Date:27-11-2021 | Time~11:20 AM

Absolute Value বা পরম মান নির্ণয়
|-7|=7
|7|=7
অর্থাৎ কোন ডিজিট ধনাত্মক বা ঋণাত্মক যাই 
হোক না কেন তার পরম মান হবে ধনাত্মক। 

c programming এ absolute value বের করার জন্য abs()
ব্যবহার করা হয়,  অর্থাৎ abs() এর ভিতরে ধনাত্মক 
বা ঋণাত্মক যাই রাখি না কেন সেটা ধনাত্মক 
রেজাল্ট শো করবে।
*/

#include<stdio.h>
int main()
{
int n,absolute;
printf("Enter Number:");
scanf("%d",&n);

absolute=abs(n);
/*absolute variable এর মধ্যে আমাদের নেওয়া 
নাম্বারটিকে abs() এর মাধ্যমে পরম করে রাখলাম
*/

printf("Absolute Value:%d",absolute);
//absolute print করে দিলাম
}




