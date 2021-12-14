/*Date:14-12-2021 | Time~4:35 PM

Pattern1.4
A
B B
C C C
D D D D
*/

#include<stdio.h>
int main()
{
int num;
printf("Enter Pattern Row Number:");
scanf("%d",&num);

for(int row=1;row<=num;row++){
   for(int col=1;col<=row;col++){
     printf("%c ",row+64);//row+64 দেওয়াতে উপরের মতো প্যাটার্ন প্রিন্ট হয়েছে।
   }
   printf("\n");
}



}



