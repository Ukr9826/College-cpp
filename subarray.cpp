#include<iostream>
#include<climits>
using namespace std;
int main()
{	cout<<" Enter the number of elements of the array"<<endl;
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	int ans=INT_MIN;
	int maxa;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	{	cin>>a[i];
	}
	for(int san=1;san<=n;san++)
	{	for(int i=0;i<n;i++)
		{	for(int k=0;k<san;k++)
			{	sum+=a[i+k];
			}
			if(sum>ans)
			{	ans=sum;
				maxa=san;
			}
			sum=0;
		}
	}
	cout<<"Maximum sum of subarray is"<<ans<<endl;
	cout<<"Its length is "<<maxa<<endl;
	return 0;
}
