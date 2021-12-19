/*Date:19-12-2021 | Time~3:15 PM
Print L Pattern
Enter Pattern Range:5

*
*
*
*
*****

এখানে দেখা যাচ্ছে প্রথম কলাম এবং শেষ রো(n)
প্রিন্ট হয়েছে
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
    if(row==n || col==1){
      printf("*");
    }
    else{
      printf(" ");
    }
  }
  printf("\n");
}






}