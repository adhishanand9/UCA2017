#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
char* load_file(char const* path)
{
    char* buffer = 0;
    long length;
    FILE * f = fopen (path, "rb"); //was "rb"

    if (f)
    {
      fseek (f, 0, SEEK_END);
      length = ftell (f);
      fseek (f, 0, SEEK_SET);
      buffer = (char*)malloc ((length+1)*sizeof(char));
      if (buffer)
      {
        fread (buffer, sizeof(char), length, f);
      }
      fclose (f);
    }
    buffer[length] = '\0';
    // for (int i = 0; i < length; i++) {
    //     printf("buffer[%d] == %c\n", i, buffer[i]);
    // }
    //printf("buffer = %s\n", buffer);

    return buffer;
}
void removeWhiteSpace(char* html)
{
  int i;
  char *buffer = malloc(strlen(html)+1), *p=malloc (sizeof(char)+1);
  memset(buffer,0,strlen(html)+1);
  for (i=0;html[i];i++)
  {
    if(html[i]>32)
    {
      sprintf(p,"%c",html[i]);
      strcat(buffer,p);
    }
  }
  strcpy(html,buffer);
  free(buffer); free(p);
}
void getTitle(char *file)
{
  char c;
  int len, i, j;
  char* p1;
  char* p2;
  p1=file[0];
}

int main()
{
  char count[5];
  for(int i=1;i<=1;i++)
  {
    char path[50]="./Links/link";
    sprintf(count,"%d",i);
    strcat(path,count);
    strcat(path,".txt");
    //printf("%s\n",path );
    char *file=load_file(path);
    removeWhiteSpace(file);
    getTitle(file);
  }
}
