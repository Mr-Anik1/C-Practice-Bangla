/*Date:22-11-2021
Ascii Value ইনপুট দিলে সেটা Ascii Character 
এ পরিণত হবে।

যেমন A=065 
আর a=097
*/

#include<stdio.h>
int main()
{
	int n;
	char ch;
	
	printf("Enter any Ascii value:");
	scanf("%d",&n);
	printf("Ascii character is:%c",n);
	
}