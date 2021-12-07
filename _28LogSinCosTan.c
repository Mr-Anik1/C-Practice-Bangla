/*Date:3-12-2021 | Time~11:28 AM

log,sin,cos,tan এসবের মান বের করা৷ 
*/


#include<stdio.h>
#include<math.h>
int main()
{

double x,result;
printf("Enter Any Number:");
scanf("%lf",&x);

result=log(x);
printf("log(%.2lf) = %.2lf",x,result);

result=sin(x);
printf("\nsin(%.2lf) = %.2lf",x,result);

result=cos(x);
printf("\ncos(%.2lf) = %.2lf",x,result);

result=tan(x);
printf("\ntan(%.2lf) = %.2lf",x,result);
	
}







