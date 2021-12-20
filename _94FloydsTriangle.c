/*Date:19-12-2021 | Time~9:41 PM

★Floyd's Triangle★

Enter Pattern Range:4

1
2 3
4 5 6
7 8 9 10

সবার প্রথমে count=0
row=1 হলে col<=row শর্তে col=1 মানে কাউন্ট 
একবার increment হবে তখন count=1 হয়ে যাবে।
তাহলে প্রথম row তে 1 প্রিন্ট হলো।


এখন count=1 
row=2 হলে col<=row শর্তে col=1,col=2
মানে count দুইবার increment হবে, 
তখন প্রথমবার count=2 হবে এবং দ্বিতীয়বার 
count=3 হবে।
তাহলে দ্বিতীয় row তে 2 3 প্রিন্ট হলো।


এখন count=3
row=3 হলে col<=row শর্তে col=1,col=2,col=3
মানে count তিনবার increment হবে, 
তখন প্রথমবার count=4 হবে এবং দ্বিতীয়বার 
count=5 হবে এবং তৃতীয়বার count=6 হবে।
তাহলে তৃিতীয় row তে 4 5 6 প্রিন্ট হলো।

এরকমভাবে চলতে থাকবে...
*/

#include<stdio.h>
int main()
{
int n,count=0;
printf("Enter Pattern Range:");
scanf("%d",&n);
printf("\n");

for(int row=1;row<=n;row++){
  for(int col=1;col<=row;col++){
    printf("%d ",++count);//++count করার কারণেই সিকোয়েন্স আকারে নাম্বার প্রিন্ট হয়েছে। কারণ লুপ একবার চললেই কাউন্টের মান ১ বেড়ে যাবে।
  }
  printf("\n");
}










}