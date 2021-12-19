/*Date:17-12-2021 | Time~7:56 PM

Pattern Type-9

Pyramid Pattern
    *
   ***
  *****
 *******
 
 প্রথমেঃ-
 space loop দিতে হবে 
 n-row পর্যন্ত
 
 
 তারপরঃ-
 1st Row=2*row-1=2*1-1=1
 2nd Row=2*2-1=3
 3rd Row=2*3-1=5
 4th Row=2*4-1=7
 
 col<=2*row-1 করি তাহলেই হয়ে যাবে।
*/

#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);

for(int row=1;row<=n;row++){
   //space loop
   for(int s=1;s<=n-row ;s++){
     printf(" ");
   }
   
   //column loop
   for(int col=1;col<=2*row-1;col++){// magical condition [ col<=2*row-1 ]
     printf("$");
   }
   printf("\n");
}









}





