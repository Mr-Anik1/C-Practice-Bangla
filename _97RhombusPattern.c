/*Date:20-12-2021 | Time~11:49 AM

★Rhombus Pattern★

Enter Pattern Range:5

*****
 *****
  *****
   *****
    *****
এখানে দেখা যাচ্ছে প্রথম row তে কোন স্পেস
নেই। দ্বিতীয় row তে একটা স্পেস দিয়ে শুরু
হয়েছে। তৃতীয় row তে ২ টা স্পেস দিয়ে শুরু
হয়েছে। 

বুঝা গেল row-1 শর্ত দিলেই কাজ হয়ে যাবে। 
*/

#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);
printf("\n\n");

for(int row=1;row<=n;row++){
   //Space Loop
   for(int s=1;s<=row-1;s++){
     printf(" ");
   }
   //Column Loop
   for(int col=1;col<=n;col++){
     printf("*");
   }
   printf("\n");
}

printf("\n\nRhombus Pattern");




}