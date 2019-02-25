using namespace std;
#include<iostream>
void fun(char a[])
{
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            if(flag==true){
                count++;
                flag=false;
            }
        }
        else{
            if(flag==false){
                count++;
                flag=true;
            }
        }
    }
}
int main()
{
 char str[] = "hello my name is rahul";
 fun(str);
 return 0;
}