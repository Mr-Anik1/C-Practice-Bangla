/*Date:25-11-2021 | Time~2:39 AM

ত্রিভুজের তিন বাহু দেওয়া থাকলে তার 
ক্ষেত্রফল বের করার প্রোগ্রাম।
*/

#include <stdio.h>
#include<math.h>
/*গাণিতিক কাজ তাই <math.h> ব্যবহার করা হয়েছে।
এটা না দিলে sqrt কাজ করত না, ইরর দিত।
*/

int main()
{
float a,b,c,s,area;
printf("Enter 3 Value of Triangle:");
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
//s এর মান বের করার নিয়ম
   
area=sqrt(s*(s-a)*(s-b)*(s-c));
//বর্গমূলের জন্য sqrt ব্যবহার করতে হয়।
   
printf("Triangle Area:%.2f",area);
}