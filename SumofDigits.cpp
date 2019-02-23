#include<iostream>
using namespace std;
int sod(int n,int k=0)
{
    if(k==0)
        k=0;
    if(n<10)
        {
            n=n+k;
            return n;
            }
    else
    {
        k+=n%10;
        n/=10;
        sod(n,k);
    }
}
int main()
{
    int n;
    cin>>n;
    int a=sod(n,0);
    cout<<a;
}

