/*Date:27-12-2021 | Time~8:56 PM

★Transpose Matrix★

Transpose Matrix হলো উক্ত ম্যাট্রিক্সটির 
row কলামে পরিণত হবে, এবং কলাম row তে পরিণত হবে।

A[3][2]={
	
	 {1,2},
	 {3,4},
	 {5,6}
	
	};

A ম্যাট্রিক্সটির 3 টি রো ও 2 টি কলাম বিদ্যমান।


A কে Transpose করলে,
A^t[2][3]={
	  
	  {1,3,5},
	  {2,4,6}
	
	};

A^t এখন 2 টি row ও 3 টি কলামে পরিণত হয়েছে।


*/

#include<stdio.h>
int main()
{
int row,col,matrixA[20][20],matrixTrans[20][20];
printf("Matrix Row:");
scanf("%d",&row);
printf("Matrix Column:");
scanf("%d",&col);

//matrixA input
printf("\n\nMatixA Input:-\n");
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
      printf("MatrixA[%d][%d]=",i,j);
      scanf("%d",&matrixA[i][j]);
   }
   printf("\n");
}



//Print matrixA
printf("\nMatrixA=");
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
      printf("%d ",matrixA[i][j]);
   }
   printf("\n");
   printf("\t");
}




//MatrixA কে ট্রান্সপোর্স
for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
      matrixTrans[j][i]=matrixA[i][j];
      /*Transpose এ সারি হয়ে যাবে কলাম আর
কলাম হয়ে যাবে সারি।
সেজন্যই matrixTrans[j][i] লিখেছি।
      
      */
   }
}



//matrixTrans কে প্রিন্ট করা
printf("\n\nMatrixATrans=\t");
for(int i=0;i<col;i++){
   for(int j=0;j<row;j++){
      printf("%d ",matrixTrans[i][j]);
   }
   printf("\n");
  printf("\t\t");
}
/*Transpose Matrix এ আগের ম্যাট্রিক্সের কলাম হয়
row, তাই এখানে রো হিসেবে আগের ম্যাট্রিক্সের 
কলাম ব্যবহার করেছি। আর আগের row হয়ে যায় column,তাই 
এখানে কলাম হিসেবে আগের ম্যাট্রিক্সের row ব্যবহার করেছি।

*/


}

