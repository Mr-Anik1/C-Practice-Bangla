/*Date:20-12-2021 | Time~7:57 PM

★Tree Pattern★

         *
       ***
     *****
    *******
  *********
***********
      ***
      ***
      ***
      ***
      ***
   *******

*/

#include<stdio.h>
int main()
{
printf("\n");
	
	
int n=9;

//Tree Head Loop like Pyramid 
for(int row=1;row<=n;row++){
   for(int s=1;s<=n-row;s++){
     printf(" ");
   }
   for(int col=1;col<=2*row-1;col++){
     printf("*");
   }
   printf("\n");
}



//Tree Body Loop |  row=8, Space=6, column=4
for(int row=1;row<=8;row++){
   for(int s=1;s<=6;s++){
     printf(" ");
   }
   for(int col=1;col<=4;col++){
     printf("|");
   }
   printf("\n");
}



//Tree Base loop   | row=1, Space=3, column=10
for(int row=1;row<=1;row++){
   for(int s=1;s<=3;s++){
     printf(" ");
   }
   for(int col=1;col<=10;col++){
     printf("৳");
   }
   printf("\n");
}


printf("\n\n  Tree Pattern");
printf("\n\n\n  ");


}