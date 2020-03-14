#include <stdio.h>
#include <string.h>
void reverse_string(char str[])
{ int i,n;
  char c;
  n=strlen(str);
  for(i=0;i<n/2;i++){
	  	c=str[i];
	    str[i]=str[n-1-i];
	    str[n-1-i]=c;
	}
}
int main(){
  char str[100];
  printf("Enter the string \n"); 
  scanf("%s",str);
  reverse_string(str);
  printf("Reversed string is=%s\n",str);
}

