/*Date:14-12-2021 | Time~8:32 PM

Pattern-5

1234
  123
    12
      1
      
এটা ঐ একই স্পেসের মতো প্যাটার্ন
তবে এটা শুরু হয়েছে বেশি ডিজিট থেকে।
 
*/


#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);

for(int row=n;row>=1;row--){//যেহেতু বেশি থেকে কমতে থাকবে তাই row--

  //space loop
  for(int space=1;space<=n-row;space++){
   printf(" ");
 }
 
 //column loop
 for(int col=1;col<=row;col++){
   printf("%d", col);
 }
 printf("\n");
 
 
}



}



