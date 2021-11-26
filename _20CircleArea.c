/*Date:25-11-2021 | Time~10:39 AM
বৃত্তের ক্ষেত্রফল নির্ণয় করার প্রোগ্রাম
*/


#include<stdio.h>
#include<math.h>
int main()
{
float r,area;
printf("Enter Radius of Circle:");
scanf("%f",&r);
area=M_PI*r*r;
/*
<math.h> নামক যে লাইব্রেরি ফাংশন ব্যবহার
করেছি সেখান থেকে পাই এর মান নেওয়ার জন্য 
M_PI ব্যবহার করেছি। এর মান 3.1416
*/

printf("Area of the Circle:%.2f",area);

}








