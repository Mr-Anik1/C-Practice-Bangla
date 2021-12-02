/*Date:2-12-2021 | Time~8:18 PM

pow() লাইব্রেরি ফাংশন ব্যবহার করে কোন 
সংখ্যার পাওয়ার বের করা।
*/

#include<stdio.h>
#include<math.h>

int main()
{
	
int x,y;
printf("Enter Any Number:");
scanf("%d",&x);

printf("%d to the power:",x);
scanf("%d",&y);

double result=pow(x,y);
/*pow() সবসময় double value return করে তাই 
result variable টা ডাবলে রাখা হয়েছে।
*/
printf("Result is:%.2lf",result);

}











