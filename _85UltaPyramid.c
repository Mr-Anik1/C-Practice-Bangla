/*Date:17-16-2021 | Time~8:38 PM

উল্টা পিরামিড

Enter Pattern Range:4

1234567
  12345
    123
      1
*/


#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);
printf("\n");

for(int row=n;row>=1;row--){//row>=1
   //space loop
   for(int s=1;s<=n-row ;s++){
     printf(" ");
   }
   
   //column loop
   for(int col=1;col<=2*row-1;col++){// magical condition [ col<=2*row-1 ]
     printf("%d",col);
   }
   printf("\n");
}









}
