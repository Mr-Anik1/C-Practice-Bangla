/*Date:19-12-2021 | Time~3:26 PM

Print X Pattern
Enter Pattern Range:5

*       *
  *   *
    *
  *   *
*        *

এখানে দেখা যাচ্ছে যখন col==row তখন স্টার 
প্রিন্ট হচ্ছে, আবার যখন col+row=n+1
তখন স্টার প্রিন্ট হচ্ছে। 



row=1 হলে যখন col=1 হবে তখন স্টার প্রিন্ট হবে।
 
 আবার row=1 এবং col=5 তখন স্টার প্রিন্ট হবে।
কারণ n=5 হলে 
row+clo==n+1
1+5==5+1
6==6




row=2 হলে যখন col=2 হবে তখন স্টার প্রিন্ট হবে।
 
আবার row=2 এবং col=4 তখন স্টার প্রিন্ট হবে।
কারণ n=5 হলে 
row+clo==n+1
2+4==5+1
6==6




row=3 হলে যখন col=3 হবে তখন স্টার প্রিন্ট হবে।
 
আবার row=3 এবং col=3 তখন স্টার প্রিন্ট হবে।
কারণ n=5 হলে 
row+clo==n+1
3+3==5+1
6==6

এরকমভাবে চলতে থাকবে n পর্যন্ত।
*/

#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);
printf("\n");


for(int row=1;row<=n;row++){
  for(int col=1;col<=n;col++){
    if(col==row || row+col==n+1){
      printf("*");
    }
    else{
      printf(" ");
    }
  }
  printf("\n");
}




}



