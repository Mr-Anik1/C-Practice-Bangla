/*Date:12-12-2021 | Time:2:56 AM

কোন সংখ্যা ইনপুট দিলে ঐ সংখ্যা 
পর্যন্ত কতগুলো Strong Number আছে 
সেগুলো বের করা। 
*/


#include<stdio.h>
int main()
{
int num,temp,rem,fact=1,strongSum=0;
printf("Enter Any Number:");
scanf("%d",&num);
printf("\nStrong Numbers Between 1 to %d:",num);



for(int i=1;i<=num;i++){//Number Provider
	temp=i;
	
	
	
	//Create Strong Number
    while(temp!=0){
      rem=temp%10;
      
      //Factorial
      for(int j=1;j<=rem;j++){
        fact*=j;
      }
      
      strongSum+=fact;
      temp=temp/10;
      
      fact=1;
      //fact এর মান পুনরায় 1 করে দিলাম
      
    }
    
    
    
    //Checking
    if(strongSum==i){
    printf("\n%d",strongSum);
    }
   
   strongSum=0;
    
}



}




