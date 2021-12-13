/*Date:13-12-2021 | Time~10:47 AM

1^2*2^2*3^2*...*n^2
*/

#include<stdio.h>
int main()
{
int n,sum=1;
printf("Enter Last Number of the Series:");
scanf("%d",&n);

for(int i=1;i<=n;i++){
  sum*=i*i;
}

printf("1^2*2^2*3^2*...*%d^2= %d",n,sum);




}





