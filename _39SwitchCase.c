/*Date:6-12-2021 | Time~8:46 PM
switch case এর ব্যবহার

*/

#include<stdio.h>
int main()
{
int num;
printf("Enter Any Number:");
scanf("%d",&num);


switch(num%2){
   case 0:
     printf("%d is Even",num);
     break;
     
   case 1:
     printf("%d is Odd",num);
     break;
     
   default:
     printf("Wrong!");
}



}





