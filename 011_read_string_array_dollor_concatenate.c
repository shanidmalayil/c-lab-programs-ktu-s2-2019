#include<stdio.h>
#include<string.

void main()
{   
char str1[100],str2[100];
int i=0,j=0;
printf("Enter 1st string : ");gets(str1);
printf("\n\nEnter 2nd string : ");gets(str2);
while(str1[i]!='$'){
	i++;
}
	
//join 2nd string to 1st 
while(str2[j]!='$'){
	str1[i++]=str2[j++];//s1[5++]=s2[0++]
}
str1[i]='\0';
//printf("\n %d, %d",i,j);
puts("Concatenated String is  : ");
puts(str1);

}

