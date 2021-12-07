/*Date:5-12-2021 | Time~7:30 PM

Positive & Negetive সংখ্যা বের করা। 

*/


#include<stdio.h>
int main()
{
int num;
printf("Enter Any Number:");
scanf("%d",&num);

  if(num>0){
    printf("%d is positive(+) number",num);
  }
  else if(num<0){
    printf("%d is negative(-) number",num);
  }
  else{
    printf("Oops Zero!");
  }


}
