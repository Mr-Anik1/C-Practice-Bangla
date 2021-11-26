/*
Date:22-11-2021
Integer,Float,Double,Character এর সাইজ
কত বাইট ওটা বের করব।

sizeof() function ব্যবহার করে এগুলোর 
সাইজ বের করা হবে।
*/


#include<stdio.h>
int main()
{
	int i;
	float f;
	double d;
	char c;
	int arr[]={2,4,5,6,8};
	
	printf("Size of Integer %d bytes",sizeof(i));//4 bytes
	
		printf("\nSize of Float %d bytes",sizeof(f));//4 bytes
		
			printf("\nSize of Double %d bytes",sizeof(d));//8 bytes
			
				printf("\nSize of Char %d bytes",sizeof(c));//1 bytes
	
	

//আবার ডাইরেক্ট লিখলেও কাজ হবে
printf("\n\nAnother Rules");
printf("\nDirect Size of Float %d bytes",sizeof(float));








/**    *******Length of Array********    **/


/*
Length of array = ( total size of array ) / ( size of data type )
*/


//Array Size
printf("\n\nArray Total size %d bytes",sizeof(arr));//20 


//Data Type Size
printf("\nSize of Data Types %d bytes",sizeof(int));//4

/*
এখন অ্যারের টোটাল সাইজকে ডাটা 
টাইপের টোটাল সাইজ দ্বারা ভাগ করলে
অ্যারেটার লেন্থ পাওয়া যাবে।
*/


//Array Length
printf("\nArray Length %d ",sizeof(arr)/sizeof(int));//5

/*    ********************************     **/










/**   **Length of Array**সঠিক নিয়ম*   **/



/*
 কিন্তু সমস্যা হলোঃ-
 
"The size of the data type is
 platform-dependent, therefore it is
 better to use the first element of the
 array."
   
এই কারণে আমরা যদি অ্যারেটার
প্রথম  ইলিমেন্টার সাইজ দিয়ে
অ্যারেটার টোটাল সাইজকে ভাগ
দেই তাহলে আর কোন সমস্যা হবে না। 


Length of array = ( total size of the array ) / ( size of the first element of the array )
*/



//Array Size
printf("\n\nTotal Size of the Array %d bytes",sizeof(arr));//20 


//Size of the first element of the Array
printf("\nFirst Element Size %d bytes",sizeof(arr[0]));//4



/*
এখন অ্যারের টোটাল সাইজকে অ্যারেটার 
প্রথম ইলিমেন্টের সাইজ দ্বারা ভাগ করলে
অ্যারেটার লেন্থ পাওয়া যাবে।
*/


//Length Of Array
 printf("\nLength of Array %d",sizeof(arr)/sizeof(arr[0]));//5
  /*
  sizeof() operator এর মাধ্যমে অ্যারেতে কয়টা ইলিমেন্ট আছে সেটা বের করা যায়।যেমন এই অ্যারেতে ৫ টা ইলিমেন্ট আছে তাই রেজাল্ট 5 শো করেছে।
  */

}
