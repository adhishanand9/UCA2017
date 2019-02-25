#include<bits/stdc++.h>
using namespace std;
int countwords(string str)
{
    bool Inwards=false;
    int i=0;
    int wc=0;
    int start,end1;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            if(Inwards==true)
            {

            }
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
string shuffling(string str,int i,int b)
{

    for(int i=strlen(str);i>0;i++)
    {
        str[i+1]=str[i];
    }



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


