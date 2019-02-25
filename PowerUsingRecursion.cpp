#include<iostream>
using namespace std;
int power(int a,int b)
{
	if(b==0)
	return 1;
	if(b==1||a==0)
	return a;
	int p;
	if(b%2==0)
	{
		p=power(a,b/2);
		p=p*p;
	}
	else
	{
		b=b-1;
		p=power(a,b/2);
		p=p*p;
		p=p*a;
	}
	return p;	
}
int main()
{
	int n,b;
	cin>>n;
	cin>>b;
	cout<<power(n,b);
	
}