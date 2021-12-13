/*Date:12-12-2021 | Time~7:12 PM
Series Programme-1
1+2+3+....+n এর যোগফল
*/

#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter Last Number of The Series:");
scanf("%d",&n);

for(int i=1;i<=n;i+=1){
   sum+=i;
}

printf("1+2+....+%d=%d",n,sum);



}



