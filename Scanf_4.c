/*
   Date:21-11-2021
   scanf() এর ব্যবহার

নোটঃ & কে এমবারসন সাইন বা এড্রেস অফ সাইন বলে।
*/


#include<stdio.h>
int main()
{
	
	int num1;
	float num2;
	double num3;

	printf("Please enter integer number:");
	scanf("%d",& num1);
	/*
যেহেতু scanf এ integer type number নেওয়া হবে তাই %d দেওয়া হয়েছে।আর কোন ভেরিয়েবলের মধ্যে নাম্বারটা নিব সেটা কমা দিয়ে & sign এর পর দেওয়া হয়েছে & num1
*/
	
printf("Integer Number is:%d",num1);
	
	
	
	
	
	
	
	
/*  ****Float & Double একসাথে**** */
printf("\n\nEnter Floating & Double  Number:");
scanf("%f %lf",& num2, & num3);
printf("Numbers are=> Floating:%.2f & Double:%lf ",num2,num3);

}
 