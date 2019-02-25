
#include<iostream>
using namespace std;
string shift(string str,int i)
{
    string *sp=&str;
    cout<<str<<endl;
    *sp=str[i];
    sp++;
    *sp=".";
    cout<<*sp<<endl;
    return str;

}
string Abb(string str)
{
    bool inward=false;
    int i=0;
    int start;
    string sf;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            if(inward=true)
            {
                str=shift(str,start);
            }
            inward=false;
        }
        else
        {
            if(inward==false)
            {
                start=i;
                inward=true;
            }
        }
        i++;
    }
    if(str[i]=='\0')
    {

    }
    return str;
}

int main()
{
    string s;
    getline(cin,s);
    string a=Abb(s);
    cout<<a;
    return 0;
}

