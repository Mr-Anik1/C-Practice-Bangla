/*Date:31-12-2021 | Time~6:47 PM

★String Reverse★
*/
#include <stdio.h>
int main()
{
char str1[100]="Anik"; 
char str2[100];
int j,i=0,len= 0;

//Calculating string length
while (str1[i] !='\0'){
    len++;
    i++;
}
   
int end=len-1;//index লেন্থ থেকে ১ কম
  
for ( j=0;j<=end;j++) {
    str2[j] = str1[end-j];//str1 এর লাস্ট ইনডেক্স হলো str2 এর প্রথম ইনডেক্স। j এর মান বাড়বে আর ইনডেক্স কমতে থাকবে।
}

str2[j] = '\0';//str2 এর লাস্ট ইনডেক্সে[index:4]  নাল '\0' বসবে।

printf("%s",str2);

   
   
   
}