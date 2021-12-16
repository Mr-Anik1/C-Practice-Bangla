/*Date:16-12-2021 | Time:~11:37 PM

Pattern-8

Enter Pattern Range:4
1
24
369
481216

এরকম প্যাটার্ন তৈরী করতে গেলে 
row*col দিতে হবে। কারণঃ-

row=1 হলে, col<=row হওয়ায় col=1 তাহলে row*col=1*1=1
1

row=2 হলে, col=1, col=2 তাহলে row*col=2*1=2 এবং 2*2=4
2 4



row=3 হলে, col=1, col=2, col=3 তাহলে row*col=3*1=3 এবং 3*2=6 এবং 3*3=9
3 6 9





*/

#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);

for(int row=1;row<=n;row++){
  for(int col=1;col<=row;col++){
    printf("%d ",row*col);
  }
  printf("\n");
}








}