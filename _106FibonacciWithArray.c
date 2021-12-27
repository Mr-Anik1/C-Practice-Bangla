/*Date:23-12-2021 | Time~8:35 PM

★Fibonacci Number Using Array★
*/

#include<stdio.h>
int main()
{
int n,arr[1000];
printf("How Many Fibonacci Numbers:");
scanf("%d",&n);
printf("\n");

arr[0]=0;
arr[1]=1;
//Fibonacci Number এর প্রথম দুটি সংখ্যা 0 ও 1 হয়।


for(int i=2;i<n;i++){
   arr[i]=arr[i-2]+arr[i-1];
/*প্রথম দুটি সংখ্যার যোগফলই পরের fibonacci number 

i=2 এর ক্ষেত্রে
arr[2]=arr[2-2]+arr[2-1]
arr[2]=arr[0]+arr[1]
মানে অ্যারেটার ২ নং ইনডেক্সের 
ফিবোনাক্কি নাম্বার হবে তার আগের দুটি
নাম্বারের যোগফল মানে arr 0 ও 1 ইনডেক্সের ভেলুর যোগফল!



i=3 এর ক্ষেত্রে
arr[3]=arr[3-2]+arr[3-1]
arr[3]=arr[1]+arr[2]
মানে অ্যারেটার ৩ নং ইনডেক্সের 
ফিবোনাক্কি নাম্বার হবে তার আগের দুটি
নাম্বারের যোগফল মানে arr 1 ও 2 নং ইনডেক্সের ভেলুর যোগফল!

এভাবে চলতে থাকবে।
*/
}



//print
for(int i=0;i<n;i++){
   printf("%d ",arr[i]);
}




}


