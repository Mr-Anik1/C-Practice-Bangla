/*Date:22-11-2021
Upper to lower case with library function 
tolower() নামক লাইব্রেরি ফাংশন ব্যবহার করে
আমরা Upper Case লেটারকে Lower Case
লেটারে পরিণত করব।
*/


#include<stdio.h>
int main()
{
	
char upper,lower;

printf("Enter any Upper Case Character:");
scanf("%c",&upper);

lower=tolower(upper);
//convert করা ভেলু lower ভেরিয়েবলের মধ্যে রাখলাম 

printf("Lower Case Character:%c",lower);


}



