/*Date:14-12-2021 | Time~4:49 PM

Pattern1.6
1
1 0
1 0 1
1 0 1 0

বাইনারী প্যাটার্ন প্রিন্ট করার জন্য col%2 করেছি
মানে যখন col=1 হবে তখন 1%2=1 প্রিন্ট করবে। 
col=2 হলে 2%2=0 প্রিন্ট করবে। 

মানে উক্ত লুপে যখন বিজোড় সংখ্যা আসবে 
মানে 1,3,5 তখন 1 প্রিন্ট করবে আর যখন জোড় 
সংখ্যা আসবে মানে 2,4,6 তখন 0 প্রিন্ট করবে। 

ফলে রেজাল্ট হবে একটি বাইনারী(০,১) প্যাটার্ন।
*/

#include<stdio.h>
int main()
{
int num;
printf("Enter Pattern Row Number:");
scanf("%d",&num);

for(int row=1;row<=num;row++){
   for(int col=1;col<=row;col++){
     printf("%d ",col%2);
   }
   printf("\n");
}



}



