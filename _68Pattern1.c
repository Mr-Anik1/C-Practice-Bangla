/*Date:14-12-2021 | Time~2:07 PM

Pattern-1

1
1 2
1 2 3
1 2 3 4

উপরের প্যাটার্নটায় row 4 টা সুতরাং 
আমাদের প্রথম লুপটা row সংখ্যা নির্দেশ করবে। 

আর দ্বিতীয় লুপটা কলাম সংখ্যা নির্দেশ করবে।
যেমন 2 নাম্বার রো তে 2 টা কলাম 3 নাম্বার
রো তে 3 টা কলাম। 

*/

#include<stdio.h>
int main()
{
int num;
printf("Enter Pattern Row Number:");
scanf("%d",&num);

for(int row=1;row<=num;row++){
   for(int col=1;col<=row;col++){
     printf("%d ",col);
   }
   printf("\n");
}



}



