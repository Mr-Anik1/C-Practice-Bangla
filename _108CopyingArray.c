/*Date:25-12-2021 | Time~8:46 AM

★Copying Array Elements★
*/
#include<stdio.h>
int main()
{
int n,arr1[20],arr2[20];
printf("How Many Numbers:");
scanf("%d",&n);

printf("Enter %d Array Elements:",n);
//arr1 এ নাম্বার ইনপুট নিলাম
for(int i=0;i<n;i++){
   scanf("%d",&arr1[i]);
}


//arr1 এর ইলিমেন্টগুলো প্রিন্ট করে দিলাম।
printf("\nArray1:");
for(int i=0;i<n;i++){
   printf("%d ",arr1[i]);
}



//Copying Array1 Elements 
for(int i=0;i<n;i++){
   arr2[i]=arr1[i];//array2 এর ইনডেক্সে array1 এর নির্দিষ্ট ইনডেক্সের ভেলু বসিয়ে দিলাম।
}


//arr2 এর ইলিমেন্টগুলো প্রিন্ট করে দিলাম।
printf("\nArray2:");
for(int i=0;i<n;i++){
   printf("%d ",arr2[i]);
}


}