/*Date:19-12-2021 | Time~1:46 PM
Diamond Pattern

Enter Pattern Range:4

      1
    1  2
  1  2  3
1  2  3  4
  1  2  3
    1  2
      1
*/


#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);
printf("\n");


//First Loop like Pyramid
for(int row=1;row<=n;row++){
 
  for(int s=1;s<=n-row;s++){
    printf(" ");
  }
  
  for(int col=1;col<=row;col++){
    printf("%d ", col);
  }
  printf("\n");
}



//Second Loop like Ulta Pyramid
for(int row=n-1;row>=1;row--){//row=n-1 ফলে সঠিকভাবে ডায়মন্ড তৈরী হবে।
 
  for(int s=1;s<=n-row;s++){
    printf(" ");
  }
  
  for(int col=1;col<=row;col++){
    printf("%d ", col);
  }
  printf("\n");
}






}