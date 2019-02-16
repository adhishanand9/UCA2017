#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1||n==0)
        return n;
    else
    {
        n=n*fact(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int a=fact(n);
    cout<<a;
}
