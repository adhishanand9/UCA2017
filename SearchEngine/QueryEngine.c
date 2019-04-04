#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
FILE *file;
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
char stringToken(char *fileData)
{

}
int main()
{
  char search[40];
  char path[20]="IndexerList.txt";
  printf("Enter Search:\n");
  gets(search);
  FILE *fptr = fopen(path, "r");
  char *file=load_file(path);
  printf("%s\n",file );
  stringToken(file);

}
