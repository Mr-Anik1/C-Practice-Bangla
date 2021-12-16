/*Date:16-12-2021 | Time~11:24 PM

Pattern Type-7
Square Pattern

*****
*****
*****
*****
*****

*/

#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);

for(int row=1;row<=n;row++){
   for(int col=1;col<=n;col++){//col<=n এর কারণে এরকম স্কয়ার হয়েছে
     printf("%d",col%2);
   }
   printf("\n");
}



}




