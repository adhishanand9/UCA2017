using namespace std;
#include<iostream>
int flag=-1;
void shortName(char str[])
{
    int sp=0;
    int k=0;
    for(int i=0;str[i]!='\0';i++){
     if(str[i]==' '){
            if(flag==-1){

            }
            if(flag==1){
                // str[k++]=str[i];
                // str[k++]='.';
                flag=0;
            }
     }   
     else{
         
         if(flag!=1){
             sp=i;
                str[k++]=str[i];
                str[k++]='.';
                flag=1;
         }
         
     }
    }
    k--;
    for(int i=sp+1;str[i]!=' '&& str[i]!='\0';i++){
        str[k++]=str[i];
    }
    str[k]='\0';
}

int main()
{
    char str[]="  my    name    is    rahul     ";
    shortName(str);
    cout<<str;
}