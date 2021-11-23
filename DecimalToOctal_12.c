/*Date:23-11-2021
Decimal to Octal এবং Octal to Decimall

Decimal number প্রকাশ করার জন্য %d ব্যবহার করা হয়।
Octal Number প্রকাশ করার জন্য %o ব্যবহার করা হয়।
*/


#include<stdio.h>
int main()
{
	
int deci,oct;

/**      ***Decimal to Octal Start***      **/

printf("Enter Any Decimal Number:");
scanf("%d",&deci);
/*Decimal Number Input নিয়েছি তাই %d দিয়েছি,
আর উক্ত নাম্বারটি deci ভেরিয়েবলের মধ্যে রেখেছি।
*/

printf("Octal Number:%o",deci);
//যেহেতু অক্টালে রূপান্তর করব তাই %o দিয়েছি।

/**     ***Decimal to Octal End****       **/








/**      ***Octal to Decimal Start***      **/

printf("\n\nEnter Any Octal Number:");
scanf("%o",&oct);
/*Octal Number Input নিয়েছি তাই %o দিয়েছি,
আর উক্ত নাম্বারটি oct ভেরিয়েবলের মধ্যে রেখেছি।
*/

printf("Decimal Number:%d",oct);


/**      ***Octal to Decimal End***      **/

}
