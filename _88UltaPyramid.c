/*Date:19-12-2021 | Time~1:38 PM

Ulta Pyramid

Enter Pattern Range:4

1  2  3  4
  1  2  3
    1  2
      1
    
*/



#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);
printf("\n");

for(int row=n;row>=1;row--){//row=n তাই বড় থেকে শুরু হয়েছে
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