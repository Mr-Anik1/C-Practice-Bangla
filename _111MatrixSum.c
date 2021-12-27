/*Date:26-12-2021 | Time~12:13 PM

★Matrix Sum★

matrix sum করার সময় দুটি ম্যাট্রিক্সের
 কলাম ও সারি সমান হতে হবে!
 A[3][3];
 B[3][3];
*/
#include<stdio.h>
int main()
{
int row,col,matrix1[20][20],matrix2[20][20],matrix3[20][20];

//Row & Column User এর কাছ থেকে Input নিলাম। 
printf("Input Row:");
scanf("%d",&row);
printf("Input Column:");
scanf("%d",&col);




//রো এবং কলাম সমান নাকি সমান না সেটা চেকিং করলাম।
if(row!=col){
  printf("Please Input Same Size of Row & Column!");//রো এবং কলাম সমান না হলে
}
else{//রো এবং কলাম সমান হলে
	

//Matrix1 Input
printf("\n\nMatrix1 Input:-\n");
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
      printf("Matrix1[%d][%d]=",i,j);
      scanf("%d",&matrix1[i][j]);
   }
   printf("\n");
}


//Matrix2 Input
printf("\n\n\nMatrix2 Input:-\n");
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
      printf("Matrix2[%d][%d]=",i,j);
      scanf("%d",&matrix2[i][j]);
   }
   printf("\n");
}



//Matrix1 Print
printf("\n\n\nMatrix1=");
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
      printf("%d ",matrix1[i][j]);
   }
   printf("\n");
   printf("\t");
}


//Matrix2 Print
printf("\nMatrix2=");
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
      printf("%d ",matrix2[i][j]);
   }
   printf("\n");
   printf("\t");
}




//Matrix1+Matrix2 Sum
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
       matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
       //matrix3 এ যোগফল রাখলাম
   }
}



//Matrix3 Print
printf("\n\nMatrix1+Matrix2=");
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
      printf("%d ",matrix3[i][j]);
   }
   printf("\n");
   printf("\t\t");
}



}


}



