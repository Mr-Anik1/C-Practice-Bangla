/*Date:14-12-2021 | Time~4:27 PM

Pattern1.3
A
A B
A B C
A B C D
*/

#include<stdio.h>
int main()
{
int num;
printf("Enter Pattern Row Number:");
scanf("%d",&num);

for(int row=1;row<=num;row++){
   for(int col=1;col<=row;col++){
     printf("%c ",col+64);
     /*যেহেতু ক্যারেক্টার প্রিন্ট করব তাই %c দিয়েছি। 
     আর col+64 মানে হলো col++ হবে আর তার সাথে 64 
     যোগ হবে। কারণ আমরা জানি A=65 
     তাই যখন col=1 হবে তখন col+64 বা 1+64=65 হবে যা 
     A কে প্রকাশ করে। এভাবে col++ হবে আর তার 
     সাথে 64 যোগ হয়ে যথাক্রমে B C এসব প্রিন্ট হবে।
     */
   }
   printf("\n");
}



}

