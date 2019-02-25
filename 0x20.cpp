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
                a[k++]='0';
                a[k++]='x';
                a[k++]='2';
                a[k++]='0';
                flag=0;
            }

        }
        else{
            a[k++]=a[i];
            flag=1;
        }

    }
    if(a[k++]=='k-4' && a[k++]=='k-3' && a[k-2]=='2' && a[k-1]=='0')
        a[k-4]='\0';
    else
    {
        a[k]='\0';
    }

}
int main(){
    char str[]="      my    name   is  adhish";
	f(str);
    cout<<str;
    return 0;
}
