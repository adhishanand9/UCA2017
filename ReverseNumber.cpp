

#include<iostream>
using namespace std;
int reverse(int n,int k=0)
{
    if(k==0)
    {
        k=0;
    }
    if(n<10)
    {
        k=k*10;
        n+=k;
        return n;
    }
    else
    {
        k=k*10+n%10;
        n/=10;
        reverse(n,k);
    }

}
int main()
{
    int n;
    cin>>n;
    int a=reverse(n);
    cout<<a;

}
