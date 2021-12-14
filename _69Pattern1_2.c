/*Date:14-12-2021 | Time~4:23 PM

Pattern1.2
1
2 2
3 3 3
4 4 4 4
*/

#include<stdio.h>
int main()
{
int num;
printf("Enter Pattern Row Number:");
scanf("%d",&num);

for(int row=1;row<=num;row++){
   for(int col=1;col<=row;col++){
     printf("%d ",row);//এখানে row print করায় উপরের প্যাটার্ন আসবে।
   }
   printf("\n");//লাইন ভেঙে দেওয়ার জন্য
}



}

