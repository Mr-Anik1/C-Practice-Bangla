/*Date:23-12-2021 | Time~7:23 PM

★Maximum Number in Array★
*/
#include<stdio.h>
int main()
{
int n,arr[100];
printf("How Many Numbers Do You Compare:");
scanf("%d",&n);
printf("\n");

printf("Enter Numbers:");
for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
}


int max=arr[0];//ধরে নিলাম অ্যারেটার 0 নাম্বার ইনডেক্সের ভেলু হলো সবচেয়ে বড়। 


for(int i=1;i<n;i++){
   if(max<arr[i]){
     max=arr[i];
   }
/*এখানে i=1 থেকে শুরু করেছি, কারণ i=0 এর
মান আগেই আমরা max হিসেবে ধরে নিয়েছি।

condition চেক করবে যদি arr[i] এর মান max বা arr[0] এর 
থেকে বড় হয় তাহলে max=arr[i] হয়ে যাবে।




ধরে নিলাম অ্যারেটা arr[ ]={5,3,9,1,24]

এখন max=arr[0] বা 5

ফর লুপের ভেতর কন্ডিশন চেকিংঃ-

প্রথমবার i=1 এর ক্ষেত্রে দেখবে,
arr[1]=3 
max বা arr[0]=5 থেকে বড় কিনা? যেহেতু বড় না  তাই, 
max=arr[0] বা 5 ই থাকল। 
   

দ্বিতীয়বার i=2 এর ক্ষেত্রে দেখবে, arr[2]=9
max বা arr[0]=5  থেকে বড় কিনা? যেহেতু বড় তাই, 
max=arr[2] বা 9 হয়ে যাবে। মানে নতুন max=9 পেলাম
 

তৃতীয়বার i=3 এর ক্ষেত্রে দেখবে, arr[3]=1
নতুন max বা arr[2]=9 থেকে বড় কিনা? যেহেতু বড় না তাই, 
max=arr[2] বা 9 ই থাকবে।


চতুর্থবার i=4 এর ক্ষেত্রে দেখবে, arr[4]=24
max বা arr[2]=9  থেকে বড় কিনা? যেহেতু বড় তাই, 
max=arr[4] বা 24 হয়ে যাবে। মানে নতুন max=24 পেলাম


লুপ শেষ তাই অ্যারেটার মধ্যে সবচেয়ে বড় 
নাম্বার হলো 24
*/
}

printf("Maximum Number:%d",max);



}