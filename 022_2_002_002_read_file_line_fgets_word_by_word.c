//reading word by word using fscanf function
#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp;
char t[100];
fp=fopen("a.txt","r");
if(fp==NULL)
  {
  printf("Error opening source file..");
  exit(1);
   }
while(fscanf(fp,"%s",t)==1)
{
printf("%s\n",t);
}
fclose(fp);
}
