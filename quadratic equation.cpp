#include<iostream>
#include<cmath>
using namespace std;
class quad
{
private:
float a,b,c;
public:
float d,e,f,g;
quad(float i,float j,float k)
{
a=i;
b=j;
c=k;
}
int solve()
{
float l;
l=sqrt(b*b-4*a*c);
if(l==0)
{
d=-b/(2*a);
return 1;
}
else if(l>0)
{
d=(-b+l)/(2*a);
e=(-b-l)/(2*a);
return 2;
}
else
{ int r;
  r=-(b*b-4*a*c);
  f=-b/(2*a);
  g=sqrt(r)/(2*a);
return 3;
}}
};
int main()
{
int m;
float n,o,p;
cout<<"Enter the coefficients";
cin>>n>>o>>p;
quad q(n,o,p);
m=q.solve();
switch(m)
{
case 1:cout<<"\nThe roots are equal\nThe root is:\t"<<q.d;
             break;
case 2:cout<<"\nThe roots are real and distinct\n The roots are: "<<q.d<<"\t"<<q.e;
            break;
case 3:cout<<"\nThe roots are imaginary\nThe roots are:"<<q.f<<"+"<<q.g<<"i"<<" , "<<q.f<<"-"<<q.g<<"i\n";
            break;
}
return 0;}


