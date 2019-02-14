#include<bits/stdc++.h>
using namespace std;
int countwords(string str)
{
    bool Inwards=false;
    int i=0;
    int wc=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            Inwards=false;
        }
        else
        {
            if(Inwards==false)
            {
                wc++;
                Inwards=true;
            }

        }
        i++;

    }
    return wc;
}
int main()
{
    string str;
    cout<<"Enter String:";
    getline(cin,str);
    //cout<<str;
    int w=countwords(str);
    cout<<"No. of words: "<<w;
}
