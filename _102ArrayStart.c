#include<stdio.h>
int main()
{
int arra[5];//Array টার সাইজ ঠিক করে নিলাম

for(int i=0;i<=4;i++){//অ্যারেটার লাস্ট ইনডেক্স পর্যন্ত লুপ চালালাম যেন scanf() এর মাধ্যমে ভেলুগুলো ইনপুট নিতে পারি।
   scanf("%d",&arra[i]);
}

printf("\n\n");

for(int i=0;i<=4;i++){//সবগুলো ভেলু প্রিন্ট করে দিলাম।
   printf("%d ",arra[i]);
}


}