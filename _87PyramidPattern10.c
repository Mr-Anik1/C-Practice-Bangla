/*Date:19-12-2021 | Time~1:20 PM
Pyramid Pattern Another rules

Enter Pattern Range:9
         1
       1  2
     1  2  3
   1  2  3  4
    
*/



#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);
printf("\n");

for(int row=1;row<=n;row++){
 //space loop
  for(int s=1;s<=n-row;s++){
    printf(" ");
  }
  //column loop
  for(int col=1;col<=row;col++){
    printf("%d ", col);//%d এর পর একটা স্পেস দেওয়াতে এরকম প্যাটার্ন তৈরী হয়েছে।
  }
  printf("\n");
}



}