/*Date:24-12-2021 | Time~6:23 PM

★Linear Search★
অ্যারে থেকে কোন নির্দিষ্ট ভেলু খুজে
বের করা। 
*/

#include<stdio.h>
int main()
{
int value,pos=-1;
int arr[ ]={10,45,78,9,23,16,74,34};
//length বের করে নিলাম
int length=sizeof(arr)/sizeof(arr[0]);


printf("Enter Value Do you want to Search:");
scanf("%d",&value);
printf("\n");

for(int i=0;i<length;i++){
  if(value==arr[i]){//value টা কার সাথে মিলে সেটা চেকিং করলাম
    pos=i+1;
    break;
  }
}

if(pos==-1){
  printf("Value Not Found!");//কারণ পূর্বেই আমরা পজিশন -1 সেট করেছি। যদি pos এর মান ঐ -1 ই থাকে তাহলে বুঝা গেল ভেলুটা নেই।
}
else{
  printf("Value Found at Position %d",pos);
}



}


