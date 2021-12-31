/*Date:31-12-2021 | Time~10:04 PM

★[Vowel,Consonant,Digit,Word] Show★
*/
#include<stdio.h>
int main()
{
char str[1000];
char strV[1000],strC[1000],strD[1000];


int i,v,c,d,vowel,consonant,digit,word;
i=v=c=d=vowel=consonant=digit=0;//সবগুলোর ভেলু 0 বসালাম
word=1;
/*কোন সিঙ্গেল ক্যারেক্টার লিখলেও সেটা 
একটা ওয়ার্ড পরে স্পেস না থাকলেও। 
স্পেস থাকলে word++ হবে। সেকারণে প্রথমেই
 word=1 ধরে নেওয়া হয়েছে।
*/

printf("Write Something: ");
fgets(str,sizeof(str),stdin);//input
printf("\nResult: ");
puts(str);//print





while(str[i]!='\0'){	

    int ch=tolower(str[i]);//লোয়ার কেসে কনভার্ট করলাম।
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
    	
     while(1<2){
         strV[v]=str[i];
         v=v+1;//for space index
         strV[v]=' ';//space
         v++;
         break;//একটা ভেলু অ্যারেতে ঢুকে লুপ স্টপ হয়ে যাবে। পরে আবার যখন if condition সত্য হবে তখন আবার লুপে ঢুকে একটা ভেলু ঐ অ্যারেতে এড করে এই লুপ স্টপ হয়ে যাবে।
     }
     
       vowel++;
    }
    else if(ch>='a' && ch<='z'){
    	
    	 while(1<2){
         strC[c]=str[i];
         c=c+1;//for space index
         strC[c]=' ';//space
         c++;
         break;
     }
     
       consonant++;
    }
    else if(ch>='0' && ch<='9'){
    	
    	 while(1<2){
         strD[d]=str[i];
         d=d+1;//for space index
         strD[d]=' ';//space
         d++;
         break;
     }
     
       digit++;
    }
    else if(ch==' '){
      word++;
    }
    
    
    
    
    i++;
}

printf("\nVowel: %d \nThey are:[ %s ]",vowel,strV);
printf("\n\nConsonent: %d \nThey are:[ %s ]",consonant,strC);
printf("\n\nDigit: %d \nThey are:[ %s ]",digit,strD);
printf("\n\nWord: %d",word);




}