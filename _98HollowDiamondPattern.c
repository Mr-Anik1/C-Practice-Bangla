/*Date:20-12-2021 | Time~12:15 PM

★Hollow Diamond Pattern★

Enter Pattern Range:4

       *
    *    *
  *         *
*             *
  *         *
     *    *
        *
   
   
*/

#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);
printf("\n");


//Upper Pattern
for(int row=1;row<=n;row++){
   for(int s=1;s<=n-row;s++){
     printf(" ");
   }
   //Column Loop
   for(int col=1;col<=2*row-1;col++){
   	if(col==1 || col==2*row-1){//প্রথম অথবা শেষ কলাম হলে স্টার নয়তো স্পেস প্রিন্ট করে।
   	  printf("*");
   	}
       else{
         printf(" ");
       }
   }
   printf("\n");
}




//Lower Pattern
for(int row=n-1;row>=1;row--){
   for(int s=1;s<=n-row;s++){
     printf(" ");
   }
   //Column Loop
   for(int col=1;col<=2*row-1;col++){
     if(col==1 || col==2*row-1){//প্রথম অথবা শেষ কলাম হলে স্টার নয়তো স্পেস প্রিন্ট করে।
   	  printf("*");
   	}
       else{
         printf(" ");
       }
   }
   printf("\n");
}

printf("\n\nHollow Diamond Pattern");

}