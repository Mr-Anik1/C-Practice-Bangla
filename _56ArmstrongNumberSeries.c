/*Date:12-12-2021 | Time~2:06 AM

কোন সংখ্যা ইনপুট দিলে ঐ সংখ্যা 
পর্যন্ত Armstrong Number বের করবে।
*/


#include<stdio.h>
#include<math.h>
int main()
{
int num,temp,rem,pow3,armstrongSum=0;
printf("Enter Any Number:");
scanf("%d",&num);
printf("\nArmstrong Numbers Between 1 to %d:",num);


for(int i=1;i<=num;i++){
  temp=i;
  
  while(temp!=0){
    rem=temp%10;
    pow3=pow(rem,3);//Digit গুলোর পাওয়ার 3 করলাম
    armstrongSum+=pow3;//যোগ করলাম
    temp=temp/10;
  }
  
  if(armstrongSum==i){//চেক করলাম
    printf("\n%d",armstrongSum);
  }
  
  armstrongSum=0;//জিরো করে দিলাম যেন পরে কোন সমস্যা ছাড়াই কাজ করে


}





}