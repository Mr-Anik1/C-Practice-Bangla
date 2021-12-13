/*Date:13-12-2021 | Time~2:29 PM

n টা fibonacci number বের কর এটা খুব সহজ নিয়মে। 
*/

#include<stdio.h>
int main()
{
int n,f=0,s=1,febo=0,count=1;
printf("Print Fibonacci:");
scanf("%d",&n);

while(count<=n){
   printf("%d ",febo);
   f=s;
   s=febo;
   febo=f+s;
   count++;
}
/*
count----f----s-----febo
   1 ----    ----    ----  0
   2  ----1  ---- 0 ---- 1
   3 ---- 0 ----  1 ---- 1
   4 ---- 1 ----- 1 ---  2
   5 ---- 1 ----- 2 ---- 3
   6 ---- 2 ----- 3----- 5


*/




}

/*
এটা আরও সহজ উপায়! এখানে প্রিন্ট 
করব f এর ভেলু। মানে f ই হলো fibonacci number 


#include<stdio.h>
int main()
{
int n,f=0,s=1,temp,count=1;
printf("Print Lucas:");
scanf("%d",&n);

while(count<=n){
   printf("%d ",f);
   temp=f+s;
   f=s;
   s=temp;
   count++;
}

}






*/