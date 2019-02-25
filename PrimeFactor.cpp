#include<iostream>
using namespace std;
int  nextprime(int n)
{   int flag=0;
    n++;
    for(int i=2;i<=n;i++)
        if(n%i==0)
        {
            flag++;
        }
    if(flag==1)
    {
        return n;
    }
    else
    {
            nextprime(n);
    }
}
void prime(int n)
{
    int i=1;
    if(n==1)
    cout<<1;
    else
    {
        if(n%i==0)
        {
            cout<<i;
            i=nextprime(n);
        }
    }

}
int main()
{
    prime(25);
}
