#include <iostream>
#include<cmath>
using namespace std;
int main()
{	int n;int m;int p;int q;
	cout<<"Enter the no:of tabulated values "<<endl;
	cin>>n;
	double x[n];double y[n];
	cout<<"Enter the x and y values"<<endl;
	for(int i=0;i<n;i++)
	{cin>>x[i]>>y[i];
	}
	double c[3][4];
	for(int i=0;i<=2;i++)
	{for(int j=0;j<=2;j++)
	{m=i+j;
	c[i][j]=0.0;
	for(int k=0;k<n;k++)
	{c[i][j]+=pow(x[k],m);
	}
	}
	c[i][3]=0.0;
	for(int k=0;k<n;k++)
	{c[i][3]+=y[k]*pow(x[k],i);
	}
	}
	cout<<"The augmented matrix is"<<endl;
	for(int i=0;i<3;i++)
	{for(int j=0;j<4;j++)
	cout<<c[i][j]<<"\t";
	cout<<endl;
	}
	for(int k=0;k<=2;k++)
	{for(int i=0;i<=2;i++)
	{p=c[i][k]/c[k][k];
	q=c[k][k];
	for(int j=0;j<=3;j++)
	{if(i==k)
	c[i][j]/=q;
	else
	c[i][j]=c[i][j]-(p*c[k][j]);
	}
	}
	}
	cout<<"The value of the regression coefficients are"<<endl;
	for(int i=0;i<3;i++)
	{cout<<"The value of a"<<i<<"="<<c[i][n]<<endl;
	}
	return 0;
}
