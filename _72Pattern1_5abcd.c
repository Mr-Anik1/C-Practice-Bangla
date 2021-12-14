/*Date:14-12-2021 | Time~4:41 PM

Pattern1.5
a
a b
a b c
a b c d
*/

#include<stdio.h>
int main()
{
int num;
printf("Enter Pattern Row Number:");
scanf("%d",&num);

for(int row=1;row<=num;row++){
   for(int col=1;col<=row;col++){
     printf("%c ",col+96);//col+96 দেওয়ার মানে হলো small a প্রিন্ট হবে, কারণ a=97
   }
   printf("\n");
}



}



