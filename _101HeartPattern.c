/*Date:20-12-2021 | Time~11:04 PM

★Heart Pattern★

Enter Pattern Range:5


  **     **
****  ****
*********
  *******
   *****
     ***
       *
       
       
       
এই প্যাটার্নের দুটি অংশ, প্রথম অংশেঃ-

  **     **
****  ****

এটা প্রিন্ট করতে হবে।


দ্বিতীয় অংশে উল্টা পিরামিড প্রিন্ট করতে হবে।

*********
  *******
   *****
     ***
       *

তারপর দুটি একসাথে করলেই heart pattern 
হয়ে যাবে।


*/


#include <stdio.h>  
int main()
{  
int n;
printf("Enter Pattern Range:");
scanf("%d", &n);  
printf("\n\n");
    
//First:- shapes of heart 
for(int row=n/2; row<=n; row+=2){ 
    
     //Space
     for(int s=1; s<n-row; s+=2){  
         printf(" ");  
      }
        
      // printing stars for left semi circle
      for(int col=1; col<=row;col++){  
          printf("*");  
       }  
        
       
       //Printing Spaces
       for(int s=1; s<=n-row; s++){  
           printf(" ");  
        }  
        
        // printing stars for right semi circle
        for(int col=1; col<=row;col++){  
           printf("*");  
        }  
        printf("\n");  
        
        
  }  
    
    
    
    
    
    
    
//Second:- Ulta Pyramid 
for(int row=n; row>=1; row--){  
     //Space 
     for(int s=1; s<=n-row;s++){  
        printf(" ");  
      }  
     
     //Column Loop
     for(int col=1; col<=2*row-1; col++){  
         printf("*");  
      }  
      printf("\n");  
      
      
 }  
  
  
  
  
  
  
}  