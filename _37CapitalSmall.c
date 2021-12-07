/*Date:6-12-2021 | Time~11:38 AM

কোন লেটার Capital নাকি Small সেটা বের করার প্রোগ্রাম।
*/

#include<stdio.h>
int main()
{
char ch;
printf("Enter Any Leter:");
scanf("%c",&ch);

  if(ch>='A' && ch<='Z'){
    printf("%c is a Capital Letter",ch);
  }
  else if(ch>='a' && ch<='z'){
    printf("%c is a Small Letter",ch);
  }
  else{
    printf("%c is Not A Letter",ch);
  }


}


