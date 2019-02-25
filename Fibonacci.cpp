//print fibonacci using complexity n/2
using namespace std;
#include<iostream>
void fib(int n){
    int a=0;
    int b=1;
    if(n>0)cout<<a;
    if(n>=2)cout<<b;
    for(int i=2;i<n;i++){
         cout<<a<<b;
         a=a+b;
        b=a+b;
       
        i+=2;
    }
    if(n%2!=0&&n>1)
    cout<<a+b;

}
int main()
{
    int n;
    cin>>n;
    fib(n);
}