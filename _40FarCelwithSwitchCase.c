/*Date:6-12-2021 | Time~9:26 PM

switch statement এর মধ্যে ২ টি কেস আছে। যদি 
কেস 1 হয় তাহলে একটা ঘটনা ঘটবে আর কেস 
2 হলে আরেকটি ঘটনা ঘটবে।আর 1 বা 2 কোনটাই
না হলে ডিফল্টের স্ট্যাটমেন্ট শো করবে। 

*/

#include<stdio.h>
int main()
{
int choice;
float cel,far;
printf("1:Celsius to Fahrenheit");
printf("\n2:Fahrenheit to Celsius");
printf("\nEnter Your Choice:");
scanf("%d",&choice);


switch(choice){
    case 1:
       {
       	printf("\nEnter Celsius Value:");
           scanf("%f",&cel);
           far=((9*cel)+160)/5;
           //সূত্র ব্যবহার করে
           printf("Fahrenheit:%.2f",far);
       }
       break;
     
     
     case 2:
        {
            printf("\nEnter Fahrenheit Value:");
            scanf("%f",&far);
            cel=((5*far)-160)/9;
            printf("Celsius Value:%.2f",cel);
        }
        break;
     
     
     default:
        printf("\nPlease Enter Correct Choice!");

}



}
