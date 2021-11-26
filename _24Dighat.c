/*Date:26-11-2021 | Time~5:08 PM
ax^2+bx+c সমীকরণের মূল নির্ণয়:- 
সূত্রঃ (-b+-√(b^2-4ac))/2a

তাহলে মূলদ্বয়, 
x1=(-b+√(b^2-4ac))/2a
x2=(-b-√(b^2-4ac))/2a

আমরা প্রোগ্রাম লেখার সময় সূত্রটা ভেঙে লিখব।
d=√(b^2-4ac) করব।
তখন মূলদ্বয় হবে,
x1=(-b+d)/2a
x2=(-b-d)/2a

b^2>=4ac
*/


#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,x1,x2;
printf("Enter Value of A B C: ");
scanf("%f %f %f",&a,&b,&c);

d=sqrt((b*b)-(4*a*c));
//√(b^2-4ac) এই অংশটুকু d এর মধ্যে রাখলাম

x1=(-b+d)/(2*a);
x2=(-b-d)/(2*a);

printf("Value of x1:%.2f",x1);
printf("\nValue of x2:%.2f",x2);
}

