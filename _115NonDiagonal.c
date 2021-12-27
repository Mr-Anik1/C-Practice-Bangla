/*Date:28-12-2021 | Time~1:05 AM

★Print Non Diagonal Elements★
কোন ম্যাট্রিক্সের Diagonal Elements ছাড়া 
বাকিগুলো প্রিন্ট করতে হবে!


*/
#include<stdio.h>
int main()
{
int row,col,matrix1[20][20],sum=0;

printf("Matrix Non Diagonal Elements Sum");
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



//Print Non Diagonal Elements of Matrix1
printf("\n\nNon Diagonal Elements:");
for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
    if(i==j){//যখনই i & j সমান অর্থাৎ Diagonal তখন continue statement এর মাধ্যমে ঐ ইলিমেন্টগুলো স্কিপ করবে।
    	continue;
    }
    printf("%d ",matrix1[i][j]);//Non Diagonal Print করলাম
    sum+=matrix1[i][j];
  }
}

printf("\nSum of Non Diagonal Elements:%d", sum);





}


