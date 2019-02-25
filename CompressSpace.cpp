using namespace std;
#include<iostream>
int count=0;
int flag=-1;
int f(char a[]){
    int k=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            if(flag==-1){

            }
            if(flag==1){
                a[k++]=' ';
                flag=0;
            }

        }
        else{
            a[k++]=a[i];
            flag=1;
        }
        
    }if(a[k-1]==' ')
    a[k-1]='\0';
    else
    {
        a[k]='\0';
    }
    
}
int main(){
    char str[]="      my    name   is    adhish   ";
	f(str);
    cout<<str;
    return 0;
}