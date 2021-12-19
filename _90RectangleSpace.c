/*Date:19-12-2021 | Time~2:12 PM

Rectangle middle space



Enter Pattern Range:5

*****
*     *
*     *
*     *
*****

এখানে দেখা যাচ্ছে প্রথম row আর শেষ
row(n) এবং প্রথম কলাম এবং শেষ কলামে(n)
স্টার(*) রয়েছে।আর বাকি গুলোতে স্পেস। 




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
  	
    if(row==1 || row==n || col==1 || col==n){//condition
      printf("*");
    }
    else{
      printf(" ");
    }
    
  }
  printf("\n");
}









}