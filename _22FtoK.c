/*Date:26-11-2021 | Time~12:21 PM

Fahrenheit to Kelvin & Kelvin to Fahrenheit

(f-32)/9=(k-273)/5
*/

#include<stdio.h>
int main()
{
float far,kel;


/***     **Fahrenheit to Kelvin**    ***/
printf("Enter Fahrenheit Value:");
scanf("%f",&far);
kel=((5*far)+2297)/9;
//সূত্র ব্যবহার করে
printf("Kelvin Value:%.2f",kel);




/***      **Kelvin to Fahrenheit**     ****/
printf("\n\nEnter Kelvin Value:");
scanf("%f",&kel);
far=((9*kel)-2297)/5;
printf("Fahrenheit Value:%.2f",far);


}