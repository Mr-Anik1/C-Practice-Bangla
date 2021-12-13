/*Date:13-12-2021 | Time~6:07 PM

Lucas Number শুরু হয় 2 1 দিয়ে।

*/



#include<stdio.h>
int main()
{
int n,f=2,s=1,luc,count=1;
printf("Print Lucas:");
scanf("%d",&n);

while(count<=n){
   printf("%d ",f);
   luc=f+s;
   f=s;
   s=luc;
   count++;
}


}