/*Date:5-12-2021 | Time~7:08 PM
Even or Odd

যদি কোন সংখ্যাকে ২ দ্বারা ভাগ করলে ভাগশেষ 
না থাকে তাহলে সেটা জোড় সংখ্যা। 
আর যদি ভাগশেষ থাকে তাহলে সেটা বিজোড়। 

ভাগশেষ বের করার সাইন  %  
*/

#include<stdio.h>
int main()
{
int num;
printf("Enter Any Number:");
scanf("%d",&num);

if(num<0){
  printf("Please Enter Positive Number");
}
else{
	
    if(num%2==0){
	    printf("%d is Even Number",num);
    }
    else{
     	printf("%d is Odd Number",num);
    }
   
 }

}

