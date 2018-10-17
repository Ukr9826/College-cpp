#include <iostream>
using namespace std;
int main()
{	int n; int a,b,t;
	cout<<"Enter the number of elements required in a Fibanocci series"<<endl;
	cin>>n;
	a=0,b=1,t=0;
	if(n==2)
	{	cout<<"The fibanocci series is"<<endl;
		cout<<a<<","<<b<<endl;
	}
	else if(n<2)
	{	cout<<"No fibanocci series"<<endl;
	}
	else
	{	cout<<"The fibanocci series is"<<endl;
		cout<<a<<","<<b;
		for(int i=3;i<=n;i++)
		{ 	t=a+b;
			cout<<","<<t;
			a=b;
			b=t;
		}
	
	}

}
