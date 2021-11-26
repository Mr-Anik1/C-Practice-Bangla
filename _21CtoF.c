/*Date:26-11-2021 | Time~11:23 AM

Celcius to Fahrenheit & Fahrenheit to Celsius 

c/5=(f-32)/9
*/

#include<stdio.h>
int main()
{
float cel,far;


/***     **Celsius to Fahrenheit**    ***/
printf("Enter Celsius Value:");
scanf("%f",&cel);
far=((9*cel)+160)/5;
//সূত্র ব্যবহার করে
printf("Fahrenheit:%.2f",far);




/***      **Fahrenheit to Celsius**     ****/
printf("\n\nEnter Fahrenheit Value:");
scanf("%f",&far);
cel=((5*far)-160)/9;
printf("Celsius Value:%.2f",cel);


}
