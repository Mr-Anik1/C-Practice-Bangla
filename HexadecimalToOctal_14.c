/*Date:23-11-2021
Octal to Hexadecimal vice versa

Octal Number প্রকাশ করার জন্য %o ব্যবহার করা হয়।
Hexadecimal Number প্রকাশ করার জন্য %x ব্যবহার করা হয়।
*/


#include<stdio.h>
int main()
{
	
int oct,hex;

/**    ***Octal to Hexadecimal Start**   **/

printf("Enter Any Octal Number:");
scanf("%o",&oct);
/*Octal Number Input নিয়েছি তাই %o দিয়েছি,
আর উক্ত নাম্বারটি oct ভেরিয়েবলের মধ্যে রেখেছি।
*/

printf("Hexadecimal Number:%x",oct);
//যেহেতু Hexadecimal রূপান্তর করব তাই %x দিয়েছি।

/**     ***Octal to Hexadecimal  End****       **/








/**      ***Hexadecimal to Octal Start***      **/

printf("\n\nEnter Any Hexadecimal Number:");
scanf("%x",&hex);
/*Hexadecimal Number Input নিয়েছি তাই %x দিয়েছি,
আর উক্ত নাম্বারটি hex ভেরিয়েবলের মধ্যে রেখেছি।
*/

printf("Octal Number:%o",hex);


/**      ***Hexadecimal to Octal End***      **/

}
