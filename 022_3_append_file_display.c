//iii) Append data to a file and display the contents to console
#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp;
char t[100];
fp=fopen("a.txt","a");
if(fp==NULL)
  {
  printf("Error opening source file..");
  exit(1);
   }
printf("Enter the contents to append.................\n");
while(1)
{
 fgets(t,sizeof(t),stdin);
 if(strcmp(t,"end\n")==0) break;
 fputs(t,fp);
}
fclose(fp);
fp=fopen("a.txt","r");
printf("File contents after appending...\n");
printf("********************************\n");
while(fgets(t,sizeof(t),fp)!=NULL)
{
printf("%s",t);
}
fclose(fp);
}
