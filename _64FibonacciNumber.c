/*Date:13-12-2021 | Time~12:32 PM

Fibonacci Number বের করার প্রোগ্রাম। 

Fibonacci Number এর প্রথম দুটি সংখ্যা 
হলো 0 ও 1 তার পরের সংখ্যা  হবে প্রথম 
দুটির যোগফল। 

first=0 & second=1 হলে,
fibo=first+second [1=0+1 ]
first=second [ first=1 ]
second=fibo [ second=1 ]



প্রথম ইটারেশনঃ
fibo=first+second
1=0+1 [ fibo=1 হয়ে গেল ]

first=second [ second=1 আছে তাহলে এখন second এর ভেলু first এ বসে যাবে তাহলে first=1 হয়ে যাবে ]

second=fibo [ fibo=1 আছে তাহলে এখন fibo এর ভেলু second এ বসে যাবে তাহলে second=1 হয়ে যাবে ]

ফলঃ 0 1 1


২য় ইটারেশনঃ
fibo=first+second
2=1+1 [ fibo=2 হয়ে গেল, কারণ উপরে first=1 & second=1 পেয়েছিলাম ]

first=second [ second=1 আছে তাহলে এখন second এর ভেলু first এ বসে যাবে তাহলে first=1 হয়ে যাবে ]

second=fibo [ fibo=2 আছে তাহলে এখন fibo এর ভেলু second এ বসে যাবে তাহলে second=2 হয়ে যাবে ]

ফলঃ 0 1 1 2




৩য় ইটারেশনঃ
fibo=first+second
3=1+2 [ fibo=3 হয়ে গেল, কারণ উপরে first=1 & second=2 পেয়েছিলাম ]

first=second [ second=2 আছে তাহলে এখন second এর ভেলু first এ বসে যাবে তাহলে first=2 হয়ে যাবে ]

second=fibo [ fibo=3 আছে তাহলে এখন fibo এর ভেলু second এ বসে যাবে তাহলে second=3 হয়ে যাবে ]

ফলঃ 0 1 1 2 3
*/

#include<stdio.h>
int main()
{
int n,first=0,second=1,count=0,fibo;
printf("Print Fibonacci:");
scanf("%d",&n);

while(count<n){
	
   if(count<=1){//যেহেতু fibonacci number এর প্রথম দুটি সংখ্যা 0 ও 1 থাকে তাই count এর মান 1 পর্যন্ত fibo=count হবে।যখনই count এর মান 1 থেকে বেশি হবে তখন else এর চলে যাবে।
     fibo=count;
   }
   else{
     fibo=first+second;
     first=second;
     second=fibo;
   }
 
   printf("%d ",fibo);
   count++;
}






}





