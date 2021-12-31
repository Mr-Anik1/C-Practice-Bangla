/*Date:30-12-2021 | Time~4:12 PM

★Input String Using fgets()
★Copy String Using strcpy()
*/

#include<stdio.h>
int main()
{
char source[200],target[200];

//Input String
printf("Input String:");
fgets(source,sizeof(source),stdin);//Read/Input
printf("\nSource:");
puts(source);//Display



//copy string
strcpy(target,source);
printf("Target:");
puts(target);//Display Copy of String


}



