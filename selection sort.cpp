#include<iostream>
using namespace std;
int main()
{	int n;
	cout<<"Enter the number of elements of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array"<<endl;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int minindex;
	for(int i=0;i<n-1;i++)
	{	minindex=i;
		for(int j=i+1;j<n;j++)
		{	if(a[j]<a[minindex])
			{	int t=a[j];
				a[j]=a[minindex];
				a[minindex]=a[j];
				minindex=j;
			}
		}
	}
	cout<<"Sorted array is"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
