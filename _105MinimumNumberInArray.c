/*Date:23-12-2021 | Time~8:06 PM

★Minimum Number in Array★
*/
#include<stdio.h>
int main()
{
int n,arr[100];
printf("Compare Numbers:");
scanf("%d",&n);
printf("\nEnter Numbers:");

for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
}

int min=arr[0];//ধরে নিলাম arr[0] হলো সবচেয়ে ছোট।
for(int i=1;i<n;i++){
   if(min>arr[i]){
     min=arr[i];
   }
/*কন্ডিশন চেক করে দেখবে arr[i] এর মান min থেকে 
ছোট কিনা? যদি ছোট হয় তাহলে min=arr[i] হয়ে যাবে।
*/
}
printf("Minimum Number:%d",min);




}