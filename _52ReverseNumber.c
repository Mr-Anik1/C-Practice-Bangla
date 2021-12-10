/*Date:11-12-2021 | Time~12:45 AM
Reverse a number

যেমন 123 কে reverse করলে হয় 321
*/

#include<stdio.h>
int main()
{
int num,temp,rem,rev=0;
printf("Enter Any Number:");
scanf("%d",&num);
temp=num;


while(temp!=0){
  rem=temp%10;
  rev=rev*10+rem;//Magical Line
  temp=temp/10;
}

printf("%d Reverse is:%d",num,rev);



}





