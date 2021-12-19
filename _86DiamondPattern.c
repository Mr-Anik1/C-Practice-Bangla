/*Date:17-12-2021 | Time~9:01 PM

Diamond Pattern
*/

#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);
printf("\n");


//First Loop like Pyradid
for(int row=1;row<=n;row++){
  //space loop
  for(int s=1;s<=n-row;s++){
    printf(" ");
  }
  
  for(int col=1;col<=2*row-1;col++){
    printf("$");
  }
  printf("\n");
}




//Second Loop like ulta pyramid
for(int row=n-1;row>=1;row--){//row=n-1 করার কারণ হলো আগের লুপটার শেষের রো এর মতো যাতে এটা না হয়।
  //space loop
  for(int s=1;s<=n-row;s++){
    printf(" ");
  }
  
  for(int col=1;col<=2*row-1;col++){
    printf("$");
  }
  printf("\n");
}






}


