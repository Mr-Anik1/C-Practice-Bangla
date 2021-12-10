/*Date:8-12-2021 | Time~6:18 PM
Factorial বের করার প্রোগ্রাম। 

কোন সংখ্যার factorial মানে হলো ১ থেকে ঐ 
সংখ্যা পর্যন্ত গুণফল।যেমন 5 এর factorial 
হলোঃ ১*২*৩*৪*৫=১২০
*/

#include<stdio.h>
int main()
{
int n,fact=1;
printf("Enter Any Number:");
scanf("%d",&n);

   for(int i=1;i<=n;i++){
      fact*=i;//fact=fact*i
   }
printf("%d! Factorial is:%d",n,fact);


}

