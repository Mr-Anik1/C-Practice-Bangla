/*Date:28-12-2021 | Time~12:13 AM

★Print Diagonal Elements & Sum Diagonal Elements★

Diagonal Elements হলো ঐসব ইলিমেন্ট 
কোন ম্যাট্রিক্সের রো এবং কলামের ইনডেক্স 
যেখানে সমান হয়। 

A[3][3]={
	
	{1,2,3},
	{4,5,6},
	{7,8,9}
	
	};
A Matrix এ Diagonal Elements হলো 1,5,9 
কারণ 1 জিরো রো এবং জিরো কলামে অবস্থিত [0][0]
5 দুই নাম্বার রো এবং দুই নাম্বার কলামে অবস্থিত[2][2]
9 তিন নাম্বার রো এবং তিন নাম্বার কলামে অবস্থিত[3][3]
*/


#include<stdio.h>
int main()
{
int row,col,matrix1[20][20],sum=0;

printf("Matrix Diagonal Elements Sum");
retval://label
printf("\n\nInput Row:");
scanf("%d",&row);
printf("Input Column:");
scanf("%d",&col);

while(row!=col){
  printf("\nError! Please Input Same Size of Row & Column!");
  goto retval;//row & col সমান না হলে লেবেলে চলে যাবে পুনরায় ইনপুট নেওয়ার জন্য 
}

	

//Matrix1 Input
printf("\n\nMatrix1 Input:-\n");
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
      printf("Matrix1[%d][%d]=",i,j);
      scanf("%d",&matrix1[i][j]);
   }
   printf("\n");
}


//Matrix1 Print
printf("\n\nMatrix1=");
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
      printf("%d ",matrix1[i][j]);
   }
   printf("\n");
   printf("\t");
}



//Print Diagonal Elements of Matrix1
printf("\n\nDiagonal Elements:");
for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
    if(i==j){//i & j যখন সমান তখনই Diagonal Elements 
       printf("%d ", matrix1[i][j]);
       sum+=matrix1[i][j];
    }
  }
}

printf("\nSum of Diagonal Elements:%d", sum);





}



