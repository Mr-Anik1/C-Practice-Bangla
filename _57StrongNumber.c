/*Date:12-12-2021 | Time:2:35 AM
Check Strong Number 

Strong Number হলো ঐসব নাম্বার যেগুলোর 
প্রত্যেকটা ডিজিটের Factorial এর যোগফল
উক্ত সংখ্যার সমান হবে।

145 Strong Number কিনা?
1!=1
4!=1*2*3*4=24
5!=1*2*3*4*5=120

total=1!+4!+5!=1+24+120=145
সুতরাং, 145 একটি স্ট্রং নাম্বার!
*/

#include<stdio.h>
int main()
{
int num,temp,rem,fact=1,strongSum=0;
printf("Enter Any Number:");
scanf("%d",&num);
temp=num;

while(temp!=0){
   rem=temp%10;
   
   //Factorial বের করলাম আর এটা fact ভেরিয়েবলের মধ্যে স্টোর করলাম
   for(int i=1;i<=rem;i++){
     fact*=i;
   }
   
   strongSum+=fact;//fact যোগ করলাম
   temp=temp/10;
   
   fact=1;//fact এর মান পুনরায় 1 করে দিলাম

}

if(strongSum==num){
  printf("%d is a Strong Number",num);
}
else{
  printf("%d is not a Strong Number",num);
}





}




