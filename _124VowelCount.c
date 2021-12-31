/*Date:31-12-2021 | Time~8:49 PM

★[Vowel,Consonant,Digit,Word] Count★
*/
#include<stdio.h>
int main()
{
char str[1000];
int i,vowel,consonant,digit,word;
i=vowel=consonant=digit=0;//সবগুলোর ভেলু 0 বসালাম
word=1;
/*কোন সিঙ্গেল ক্যারেক্টার লিখলেও সেটা 
একটা ওয়ার্ড পরে স্পেস না থাকলেও। 
স্পেস থাকলে word++ হবে। সেকারণে প্রথমেই
 word=1 ধরে নেওয়া হয়েছে।
*/

printf("Write Something:");
fgets(str,sizeof(str),stdin);//input
printf("\nResult: ");
puts(str);//print


while(str[i]!='\0'){
    int ch=tolower(str[i]);//লোয়ার কেসে কনভার্ট করলাম।
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
       vowel++;
    }
    else if(ch>='a' && ch<='z'){
       consonant++;
    }
    else if(ch>='0' && ch<='9'){
       digit++;
    }
    else if(ch==' '){
      word++;
    }
    
    
    i++;
}

printf("\nVowel: %d",vowel);
printf("\nConsonent: %d",consonant);
printf("\nDigit: %d",digit);
printf("\nWord: %d",word);




}

