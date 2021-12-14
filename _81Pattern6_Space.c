/*Date:14-12-2021 | Time~10:30 PM


Pattern-6

      1
    12
  123
1234
  123
    12
      1

*/

#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);



//first pattern loop
for(int row=1;row<=n;row++){
	
  //space loop
  for(int space=1;space<=n-row;space++){
    printf(" ");
  }
  
  for(int col=1;col<=row;col++){
    printf("%d",col);
  }
  printf("\n");
  
  
}




//Second Pattern Loop
for(int row=n-1;row>=1;row--){
	
	//space loop
   for(int space=1;space<=n-row;space++){
     printf(" ");
   }
   
   for(int col=1;col<=row;col++){
     printf("%d",col);
   }
   printf("\n");
   
   
}



}

