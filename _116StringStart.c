/*Date:28-12-2021 | Time~7:57 PM

String Start
*/

#include<stdio.h>
int main()
{
char str[ ]="Hello Anik";//single line
/*String যেহেতু অনেকগুলো ক্যারেক্টারের অ্যারে তাই
ডাটা টাইপ হিসেবে char ব্যবহার করা হয়েছে আর,
যেহেতু অ্যারে তাই str এর পর [ ] নেওয়া হয়েছে।
আর string সবসময় ডাবল কোটেশনের মধ্যে লিখতে হয়। " "
*/
printf("%s",str);//string print করার জন্য %s ব্যবহার করা হয়।




char strMulti[ ]="Hello I'm Anik from Bangladesh.\
The name of my village is \
ManderTala.";
/*Multiple line এ কোন স্ট্রিং লিখতে গেলে 
\ ব্যবহার করতে হয়।
ফলে এখানে স্ট্রিংগুলো মাল্টিপল 
লাইনে লিখলেও সেটা রেজাল্টে প্রিন্ট হবে এক লাইনে।
*/
              
printf("\n\n%s",strMulti);
              
              

}



