#include <stdio.h>
int main(){
    char str[150];
    int i, vowels, consonants, digits, spaces;
    vowels =  consonants = digits = spaces = 0;
    printf("Enter a  string that ends with $ :");
    gets(str); 
	printf("The String is :");	printf(str);
    for(i=0; str[i]!='$'; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' || str[i]=='A' ||
           str[i]=='E' || str[i]=='I' || str[i]=='O' ||
           str[i]=='U'){
            	//printf("\n vov =%c",str[i]);
			++vowels;
        }
        else if((str[i]>='a'&& str[i]<='z') ||		 (str[i]>='A'&& str[i]<='Z'))       {
            	//printf("\n cons =%c",str[i]);
            ++consonants;
        }
        else if(str[i]>='0' && str[i]<='9'){
            	//printf("\n dig =%c",str[i]);
            ++digits;
        }
        else if (str[i]==' '){
          	//printf("\n Space =%c",str[i]);
            ++spaces;
        }
    }//endofloop
    printf("\n\n Vowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);
    printf("\nWhite spaces: %d\n", spaces);
}
