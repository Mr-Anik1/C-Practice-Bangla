/*Date:5-12-2021 | Time~8:18 PM

Small Number বের করার প্রোগ্রম
*/


#include<stdio.h>
int main()
{
int n1,n2,n3;
printf("Enter Three Numbers:");
scanf("%d %d %d",&n1,&n2,&n3);

  if(n1<n2 && n1<n3){
    printf("%d is Small Number",n1);
  }
  else if(n2<n1 && n2<n3){
    printf("%d is Small Number",n2);
  }
  else if(n3<n1 && n3<n2){
    printf("%d is Small Number",n3);
  }
  else{
    printf("Numbers are Equal! [ %d=%d=%d ]",n1,n2,n3);
  }


}