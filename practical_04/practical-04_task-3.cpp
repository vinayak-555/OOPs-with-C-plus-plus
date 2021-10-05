#include<iostream>


 int add(int a,int b)
 {
	return a+b;
 }



 float add(float a,float b)
 {
	return a+b;
 }

namespace first;
namespace second;	
		
int main()
{
	cout<<add(1,1)<<endl;
	cout<<add(1.3f,1.4f)<<endl;
	
	return 1;
}	



