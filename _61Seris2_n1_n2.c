/*Date:12-12-2021 | Time~7:20 PM
Series Programme-2

1*2+2*3+3*4+....+n1*n2
*/


#include<stdio.h>
int main()
{
int n1,n2,a=1,b=2,sum=0;
printf("Enter Two Numbers n1 & n2:");
scanf("%d %d",&n1,&n2);

while(a<=n1 && b<=n2){
  sum+=a*b;
  a+=1;
  b+=1;
}

printf("1*2+2*3+....+%d*%d=%d",n1,n2,sum);



}





