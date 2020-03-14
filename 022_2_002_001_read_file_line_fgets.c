//reading line by line using fgets function
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
while((fgets(t,sizeof(t),fp)!=NULL))
{
printf("%s",t);
}
fclose(fp);
}
