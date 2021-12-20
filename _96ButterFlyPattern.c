/*Date:20-12-2021 | Time~12:10 AM

🦋Butterfly Pattern🦋

Enter Pattern Range:5



*            *
**         **
***      ***
****   ****
**********
****   ****
***      ***
**         **
*            *

*/

#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);
printf("\n\n\n");


//Upper Pattern
for(int row=1;row<=n;row++){
	
	
  //Upper Left Loop
  for(int col1=1;col1<=row;col1++){
     printf("*");
   }
  
  //Space loop
  for(int s=1;s<=2*n-2*row;s++){//s<=2*n-2*i Magical Condition
    printf(" ");
  }
  
  //Upper Right Loop
  for(int col2=1;col2<=row;col2++){
     printf("*");
   }
  printf("\n");
  
  
  
  
}









//Lower Pattern
for(int row=n-1;row>=1;row--){
  
  //Lower Left Loop
  for(int col1=1;col1<=row;col1++){
     printf("*");
  }
  
  //Space loop
  for(int s=1;s<=2*n-2*row;s++){//s<=2*n-2*i Magical Condition
    printf(" ");
  }
  
  //Lower Right Loop
  for(int col2=1;col2<=row;col2++){
     printf("*");
  }
  printf("\n");
  
  
  
  
}



printf("\n\n");
printf("Butterfly Pattern");


}