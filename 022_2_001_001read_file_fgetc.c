//ii) Read the data in a given file & display the file content on console
//(reading character by character using getc/fgetc function)
#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp;
int ch;
fp=fopen("a.txt","r");
if(fp==NULL)
  {
  printf("Error opening file..");
  exit(1);
   }
do{
  ch=getc(fp); // ch=fgetc(fp);
  if (ch!=EOF) putchar(ch);
}
while(ch!=EOF);
fclose(fp);
}
