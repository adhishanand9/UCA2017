
#include<iostream>
using namespace std;
 static int flag=0;
void f(int a[],int i,int j)
{

	static int c=-1;
	if(a[j]==-1)
	{
		c=i;
		return;
	}
	else if(a[j+1]==-1)
	{
		c=i+1;
		return;
	}
	else
	{
		f(a,i+1,j+2);
		if(a[i]!=a[c])
        flag=1;
		c++;
	}
}
// void f(int a[],int i,int j)
// {
// 	static int c=-1;
// 	if(a[j]==-1)
// 	{
// 		c=i;
// 		return;
// 	}
// 	else if(a[j+1]==-1)
// 	{
// 		c=i+1;
// 		return;
// 	}
// 	else
// 	{
// 		f(a,i+1,j+2);
// 		a[i]=a[i]+a[c];
// 		a[c]=a[i];
// 		c++;
// 	}
// }
/*
void f(int a[],int i,int j)
{
	static int c;
	if(a[j-1]==-1)
	{
		c=i+1;
		return;
	}
	else if(a[j]==-1)
	{
		c=i+1;
		return;
	}
	else
	{
		f(a,i+1,j+2);
		a[i]=a[i]+a[c];
		a[c]=a[i];
		c++;
	}
}
*/
int main()
{
	int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
	f(a,0,0);
    if(flag==0)
    cout<<"yes";
    else
    cout<<"no";
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
}
