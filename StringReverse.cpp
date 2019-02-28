#include<bits/stdc++.h>
using namespace std;
string reverse(string str)
{
    int i=0;
    char k=str[i];
    while(k!='\0')
    {
        k=str[i];

        i++;
    }
    return str;
}
int main()
{
    string str;
    cout<<"Enter String:";
    getline(cin,str);
    cout<<str;
    str=reverse(str);
}
