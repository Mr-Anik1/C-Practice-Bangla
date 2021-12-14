/*Date:14-12-2021 | Time~4:50 PM

Pattern1.7
1
0 0
1 1 1
0 0 0 0

row%2 দিলে এই প্যাটার্ন শো করবে। 
*/

#include<stdio.h>
int main()
{
int num;
printf("Enter Pattern Row Number:");
scanf("%d",&num);

for(int row=1;row<=num;row++){
   for(int col=1;col<=row;col++){
     printf("%d ",row%2);
   }
   printf("\n");
}



}

