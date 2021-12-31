/*Date:30-12-2021 | Time~2:03 PM

★strcpy() function ব্যবহার করে কোন স্ট্রিংকে কপি করা★

strcpy(target,source)  এর দুটি প্যারামিটার থাকে।
প্রথমটাঃ-যেখানে স্ট্রিংটাকে কপি করে স্টোর করব।
দ্বিতীয়টাঃ-যেখান থেকে কপি করব।
*/

#include<stdio.h>
int main()
{
printf("★copy string with library function strcpy()★\n");

char source1[ ]="Copy me!";
char target1[20];//এখানে কপি করে স্টোর করব

strcpy(target1,source1);//Using strcpy() function 
printf("Source Item:%s",source1);
printf("\nCopy Item:%s",target1);






//copy string without library function 
printf("\n\n\n★copy string without library function★");

char source2[ ]="Hello I'm Anik, Please copy me!";
char target2[100];
int i=0;
while(source2[i]!='\0'){
    target2[i]=source2[i];//target2 এর নির্দিষ্ট ইনডেক্সে source2 এর নির্দিষ্ট ইনডেক্সের আইটেম বসিয়ে দিলাম।
    i++;
}

printf("\nSource Item:%s",source2);
printf("\nCopy Item:%s",target2);



}





