using namespace std;
#include<iostream>
main()
{
    char arr[]={'A','B','C','D','E','F'};
    int a=6,k=-1;
    int b=1;
    for(int i=0;i<6;i++){
        for(int j=0;j<a;j++){
            cout<<arr[j]<<" ";
        }
       
        for(int j=0;j<k;j++){
            cout<<"_ "; 
        } if(a==6)a--;
        k+=2;
        
        for(int j=a-1;j>=0;j--){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        a--;
        a+=b;
        b=0;
    }
    return 0;
}