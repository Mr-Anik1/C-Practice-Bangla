/*Date:27-12-2021 | Time~5:00 PM

★Matrix  Multiplication★

ম্যাট্রিক্স গুণনে প্রথম ম্যাট্রিক্স এর 
কলাম দ্বিতীয় ম্যাট্রিক্স এর সারির(row) সমান
হতে হবে। 
*/

#include<stdio.h>
int main()
{
int row1,col1,row2,col2,matrix1[20][20],matrix2[20][20],matrixMul[20][20],sum=0;


printf("Matrix Multiplication");
retval://label
printf("\n\nMatrix1 Row:");
scanf("%d",&row1);
printf("Matrix1 Column:");
scanf("%d",&col1);

printf("\nMatrix2 Row:");
scanf("%d",&row2);
printf("Matrix2 Column:");
scanf("%d",&col2);

while(col1!=row2){/*যদি matrix1 এর কলাম এবং 
matrix2 এর রো এক না হয়, তাহলে ইরর ম্যাসেজ দিবে 
এবং goto statement ব্যবহার করে উপরে চলে
 গিয়ে আবার পুনরায় কলাম রো ইনপুট নিবে।
*/
  printf("\nError! Please Enter Same Size of First Matrix Column & Second Matrix Row");
  
  goto retval;//retval label এ চলে যাবে।
}




//Input for Matrix1
printf("\n\nMatrix1 Input:-\n");
for(int i=0;i<row1;i++){
  for(int j=0;j<col1;j++){
     printf("Matrix1[%d][%d]=",i,j);
     scanf("%d",&matrix1[i][j]);
  }
  printf("\n");
}




//Input for Matrix2
printf("\n\nMatrix2 Input:-\n");
for(int i=0;i<row2;i++){
  for(int j=0;j<col2;j++){
     printf("Matrix2[%d][%d]=",i,j);
     scanf("%d",&matrix2[i][j]);
  }
  printf("\n");
}




//Print Matrix1
printf("\n\nMatrix1=");
for(int i=0;i<row1;i++){
  for(int j=0;j<col1;j++){
     printf("%d ",matrix1[i][j]);
  }
  printf("\n");
  printf("\t");
}



//Print Matrix2
printf("\n\nMatrix2=");
for(int i=0;i<row2;i++){
  for(int j=0;j<col2;j++){
     printf("%d ",matrix2[i][j]);
  }
  printf("\n");
  printf("\t");
}





//Matrix1 & Matrix2 Multiplication 
for(int i=0;i<row1;i++){
  for(int j=0;j<col2;j++){
  	
    for(int k=0;k<col1;k++){
      sum+=matrix1[i][k]*matrix2[k][j];
    }
    matrixMul[i][j]=sum;
    sum=0;
    
  }
}




/*Print MatrixMultiplication
Multiplication করলে নতুন ম্যাট্রিক্সটা হবে
প্রথম ম্যাট্রিক্সের রো(row1) এবং দ্বিতীয় 
ম্যাট্রিক্সের কলামের(col2) সামান।
*/
printf("\n\nMatrix1*Matrix2=");
for(int i=0;i<row1;i++){
  for(int j=0;j<col2;j++){
     printf("%d ",matrixMul[i][j]);
  }
  printf("\n");
  printf("\t\t");
}









}




