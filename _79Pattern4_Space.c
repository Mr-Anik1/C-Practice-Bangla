/*Date:14-12-2021 | Time~8:10 PM

Pattern-4
      1
    12
  123
1234

এখানে row চলবে n পর্যন্ত আর এখানকার
প্রথম row তে 3 টা স্পেসের পর একটা নাম্বার 
বসেছে, তারপর দ্বিতীয় row তে 2 টা স্পেসের পর
2 টা নাম্বার বসেছে। 

তার মানে প্রথম row তে n=4 এবং row=1 
তাহলে স্পেস হবে n-row বা 4-1=3 টি।
দ্বিতীয়বার row=2 তাহলে স্পেস 4-2=2 টি

এরকম ভাবে চলবে।
*/


#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);

//First loop
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




}






