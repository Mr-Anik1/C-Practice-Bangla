/*Date:14-12-2021 | Time~4:35 PM

Pattern1.8
$
$ $
$ $ $
$ $ $ $
*/

#include<stdio.h>
int main()
{
int num;
printf("Enter Pattern Row Number:");
scanf("%d",&num);

for(int row=1;row<=num;row++){
   for(int col=1;col<=row;col++){
     printf("$ ");
   }
   printf("\n");
}



}

