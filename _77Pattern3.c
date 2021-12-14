/*Date:14-12-2021 | Time~7:29 PM

Pattern-4

1
1 2
1 2 3
1 2 3 4(১ম লুপ n পর্যন্ত শেষ)
1 2 3(২য় লুপ n-1 থেকে শুরু)
1 2
1

এরকম প্যাটার্ন তৈরী করতে গেলে ২ টা
লুপ চালাতে হবে। প্রথম লুপটা 1 থেকে n 
পর্যন্ত প্রিন্ট করবে। আর দ্বিতীয় 
লুপটা n-1 থেকে 1 পর্যন্ত প্রিন্ট করবে।

n-1 দেওয়ার কারণ হলো প্রথম লুপটা 
4 পর্যন্ত গিয়ে শেষ হলে যেন দ্বিতীয় 
লুপটা 4-1=3 থেকে শুরু হয়! 
*/


#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);

//First loop
for(int row=1;row<=n;row++){
  for(int col=1;col<=row;col++){
    printf("%d ",col);
  }
  printf("\n");
}


//Second Loop
for(int row=n-1;row>=1;row--){
  for(int col=1;col<=row;col++){
    printf("%d ",col);
  }
  printf("\n");
}



}




