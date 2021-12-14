/*Date:14-12-2021 | Time~7:49 PM

Pattern-3.2(Binary)

1
1 0
1 0 1
1 0 1 0
1 0 1
1 0
1

*/


#include<stdio.h>
int main()
{
int n;
printf("Enter Pattern Range:");
scanf("%d",&n);

//First loop
for(int row=1;row<=n;row++){
  for(int col=1;col<=row;col++){
    printf("%d ",col%2);//col%2 দেওয়ার কারণে বাইনারী মান(0,1) এসেছে।
  }
  printf("\n");
}


//Second Loop
for(int row=n-1;row>=1;row--){
  for(int col=1;col<=row;col++){
    printf("%d ",col%2);
  }
  printf("\n");
}



}





