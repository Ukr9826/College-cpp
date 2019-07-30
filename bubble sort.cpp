#include<iostream>
using namespace std;
int main()
{	int n;
	cout<<"Enter the number of terms of the array to be sorted"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	{	cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{	for(int j=0;j<n-i-1;j++)
		{	if(a[j]>a[j+1])
			{	int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	cout<<"The sorted array is"<<endl;
	for(int i=0;i<n;i++)
	{	cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
