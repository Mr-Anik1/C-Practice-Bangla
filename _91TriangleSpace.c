/*Date:19-12-2021 | Time~2:57 PM

Triangle Space Pattern
Enter Pattern Range:5

*
**
*  *
*   *
*****

এখানে দেখা যাচ্ছে প্রথম row এবং শেষ 
row(n) এবং প্রথম কলাম এবং col==row
তখন স্টার(*) প্রিন্ট করেছে, অন্যথায় 
স্পেস প্রিন্ট করেছে। 

*/


#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);
printf("\n");


for(int row=1;row<=n;row++){
  for(int col=1;col<=row;col++){
    if(row==1 || row==n || col==1 || col==row){
      printf("*");
    }
    else{
      printf(" ");
    }
  }
  printf("\n");
}






}