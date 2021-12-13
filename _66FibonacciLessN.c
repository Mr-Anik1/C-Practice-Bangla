/*Date:13-12-2021 | Time~2:15 PM

100 পর্যন্ত fibonacci number print করবে।

*/


#include<stdio.h>
int main()
{
int n,f=0,s=1,febo=0;
printf("Fibonacci Number Less Than:");
scanf("%d",&n);

while(febo<=n){
   printf("%d ",febo);
   f=s;
   s=febo;
   febo=f+s;
}




}