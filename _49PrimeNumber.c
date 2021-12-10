#include<stdio.h>
int main()
{
int num,count=0;
printf("Enter Any Positive Number:");
scanf("%d",&num);

  for(int i=2;i<=num;i++){//Number Provider
    for(int j=2;j<i;j++){//Prime Checker 
      if(i%j==0){
        count++;
        break;
      }
    }
    
    if(count==0){
      printf("%d\n",i);
    }
    count=0;
    //count এর মান পুনরায় 0 করে দিলাম
    
  }

}