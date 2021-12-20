/*Date:19-12-2021 | Time~10:28 PM


Enter Pattern Range:4

      1
    121
  12321
1234321

এই ধরণের প্যাটার্ন তৈরী করতে দুইটি অংশে
করতে হবে। প্রথম অংশে এই প্যাটার্ন তৈরী করতে হবেঃ-
row=1;row<=n;row++
      1
    12
  123
1234

দ্বিতীয় অংশেঃ-
col=row-1;col>=1;col--
     
         1
         21
         321
 
তারপর ২ টা একসাথে করলেই ঐরকম প্যাটার্ন তৈরী হয়।

*/

#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);
printf("\n");

for(int row=1;row<=n;row++){
   for(int s=1;s<=n-row;s++){
     printf(" ");
   }
   //Left Pattern
   for(int col=1;col<=row;col++){
     printf("%d", col);
   }
   
   //Right Pattern
   for(int col=row-1;col>=1;col--){
     printf("%d", col);
   }
   printf("\n");
}



}