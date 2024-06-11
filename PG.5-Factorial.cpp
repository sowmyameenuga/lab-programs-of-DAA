#include<iostream>
using namespace std;
int main()
{
	int n,i;
	long factorial=1;
	cout<<"enter an integer:";
	cin>>n;
	if(n<0)
	{
		cout<<"error!factorial of negative number doesnot exist";
	}
	else
	{
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	cout<<"factorial of is "<<factorial<<endl;
	cout<<endl;
}
	return 0;
}
