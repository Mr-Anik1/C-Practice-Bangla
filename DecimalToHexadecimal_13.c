/*Date:23-11-2021
Decimal to Hexadecimal vice versa

Decimal number প্রকাশ করার জন্য %d ব্যবহার করা হয়।
Hexadecimal Number প্রকাশ করার জন্য %x ব্যবহার করা হয়।
*/


#include<stdio.h>
int main()
{
	
int deci,hex;

/**    ***Decimal to Hexadecimal Start**   **/

printf("Enter Any Decimal Number:");
scanf("%d",&deci);
/*Decimal Number Input নিয়েছি তাই %d দিয়েছি,
আর উক্ত নাম্বারটি deci ভেরিয়েবলের মধ্যে রেখেছি।
*/

printf("Hexadecimal Number:%x",deci);
//যেহেতু Hexadecimal রূপান্তর করব তাই %x দিয়েছি।

/**     ***Decimal to Hexadecimal  End****       **/








/**      ***Hexadecimal to Decimal Start***      **/

printf("\n\nEnter Any Hexadecimal Number:");
scanf("%x",&hex);
/*Hexadecimal Number Input নিয়েছি তাই %x দিয়েছি,
আর উক্ত নাম্বারটি hex ভেরিয়েবলের মধ্যে রেখেছি।
*/

printf("Decimal Number:%d",hex);


/**      ***Hexadecimal to Decimal End***      **/

}
