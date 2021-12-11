/*Date:12-12-2021 | Time~12:54 AM

আমরা একটা নাম্বার ইনপুট দিব এবং 
দেখব ঐ নাম্বার পর্যন্ত কতগুলো palindrome 
নাম্বার আছে।


যেমন 100 ইনপুট দিলে 100 পর্যন্ত যতগুলো 
plaindrome নাম্বার আছে সেগুলো শো করবে।
*/



#include<stdio.h>
int main()
{
int num,temp,rem,rev=0;
printf("Enter Any Number:");
scanf("%d",&num);
printf("\nPlaindrome Numbers Between 1 to %d:",num);


for(int i=1;i<=num;i++){//Number Provider Loop
	temp=i;//temp দিয়ে সকল কাজ করার জন্য, যেন কোনভাবেই i এর মানের পরিবর্তন না হয়!
	
	//create reverse
    while(temp!=0){
      rem=temp%10;
      rev=rev*10+rem;
      temp=temp/10;
    }
    
    //check palindrome 
    if(rev==i){
      printf("\n%d",rev);
    }
    
    /*temp আর rev এর মান 0 করার কারণ হলো 
    যেন আবার এগুলো নতুনভাবে  ঠিকমতো
     ব্যবহার করা যায়।
    */
    temp=0;
    rev=0;
    
}



}