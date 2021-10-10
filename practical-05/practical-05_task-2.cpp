#include<iostream>
using namespace std;

int main()
{
  char a='V';
  cout<<"Character is :"<<a<<endl;
  cout<<"size is:"<<sizeof(a)<<endl;
  
  bool b=true;
  cout<<"Bool is :"<<b<<endl;
  cout<<"size is:"<<sizeof(b)<<endl;
  
  unsigned short c=10;
  cout<<"Unsigned short is :"<<c<<endl;
  cout<<"size is:"<<sizeof(c)<<endl;
  
  int d=100;
  cout<<"Integer is :"<<d<<endl;
  cout<<"size is:"<<sizeof(d)<<endl;
  
  unsigned long e=10000;
  cout<<"unsigned long is :"<<e<<endl;
  cout<<"size is:"<<sizeof(e)<<endl;
  
  float f=5.11;
  cout<<"float is :"<<f<<endl;
  cout<<"size is:"<<sizeof(f)<<endl;
  
  double g =5.123467436535;
  cout<<"double is :"<<g<<endl;
  cout<<"size is:"<<sizeof(g)<<endl;
  
  long double h=5.1234674365352334456369;
  cout<<"double is :"<<h<<endl;
  cout<<"size is:"<<sizeof(h)<<endl;
  
  wchar_t i=L'A';
  cout<<"Wide Character is :"<<i<<endl;
  cout<<"size is:"<<sizeof(i)<<endl;
  
}
