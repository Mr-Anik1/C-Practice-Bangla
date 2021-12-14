/*Date:14-12-2021 | Time~6:58 PM

Pattern-2
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

মানে প্রথম row তে বেশি ছিল পরে দ্বিতীয় row তে
1 টা কমে গেছে, তৃতীয় row তে আরও একটা 
কমে গেছে। 
*/

#include<stdio.h>
int main()
{
int n;
printf("Enter Row Range:");
scanf("%d",&n);

for(int row=n;row>=1;row--){//যেহেতু প্রথম row টা n এর সমান হবে তাই row=n দেয়া হয়েছে। row এর মান 1 থেকে বড় বা সমান,  এরপর row-- করার মানে হলো, প্রতিবার লুপ চলার পর 1 করে কমতে থাকবে। 
   for(int col=1;col<=row;col++){
     printf("%d ",col);
   }
   printf(" \n");
}






}




