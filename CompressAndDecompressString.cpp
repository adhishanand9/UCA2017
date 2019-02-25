#include<iostream>
using namespace std;
void compress(char str[]){
    int k=0;
    int ch=str[0];
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            count++;
        }
        else{
            str[k++]=ch;
            char temp = (char)count;
            cout<<temp;
            str[k++]=count+'0';
            ch=str[i];
            count=1;
        }
    }
    str[k++]=ch;
    str[k++]=count+'0';
    str[k]='\0';
}
void decompress(char str[]){
    int l=0;
    int i;
    for(i=0;str[i]!='\0';i=i+2){
        l+=str[i+1]-'0';
    }
    str[l]='\0';
    int k=l-1;
    i-=1;
    int a;
    while(i>=01){
        a=str[i]-'0';
        for(int z=0;z<a;z++){
            str[k--]=str[i-1];
        }
        i-=2;
    }
}
int main()
{
    char str[20];
    cin>>str;
    cout<<str<<endl;
    compress(str);
    cout<<str<<endl;
    decompress(str);
    cout<<str<<endl;

}
