/*Date:22-12-2021 | Time~8:25 PM

Sum of Array
*/

#include<stdio.h>
int main()
{
int n,arr[100],sum=0;
printf("How Many Numbers Do You Sum:");
scanf("%d",&n);
printf("\n");


printf("Enter Numbers:");
for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++){
  sum+=arr[i];
}

printf("\nSum Of Numbers:%d",sum);

}
