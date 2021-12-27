/*Date:25-12-2021 | Time~11:20 PM

★Input Elements for 2D Array★
*/

#include<stdio.h>
int main()
{
int arr[4][4];//Array এর row ও col সাইজ ঠিক করে দিলাম। 

//Input নেওয়া
for(int i=0;i<4;i++){
  for(int j=0;j<4;j++){
    printf("arr[%d][%d]=",i,j);//কোন রো এবং কলামে ইনপুট দিচ্ছি সেটা যেন দেখায়।
    scanf("%d",&arr[i][j]);
  }
  printf("\n");
}


printf("\n\n\n★Our 2D Array★\n\n");
//print করা
for(int i=0;i<4;i++){
  for(int j=0;j<4;j++){
    printf("%d ",arr[i][j]);
  }
  printf("\n");
}
}





