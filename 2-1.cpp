#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string n;
	cout<<"enter a number : ";
	cin>>n;
	int sum=0;
	for(int i=0;i<n.length();i++)	
	sum=sum+n[i]-48;
	cout<<endl<<"sum is "<<sum;
}
