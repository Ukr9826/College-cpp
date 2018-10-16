#include <iostream>
using namespace std;
void swap()
{int a,b,t;
cout<<"Enter two numbers to be swapped"<<endl;
cin>>a>>b;
cout<<"Before swapping "<<"a="<<a<<","<<"b="<<b<<endl;
t=a;
a=b;
b=t;
cout<<"After swapping "<<"a="<<a<<","<<"b="<<b<<endl;
}

int main()
{ swap();
return 0;
}

