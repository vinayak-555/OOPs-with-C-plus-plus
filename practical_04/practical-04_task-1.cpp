#include<iostream>
namespace first
{
	int add(int a,int b)
	{
		return a+b;
	}}
namespace second
{
	float add(float a,float b)
	{
		return a+b;
	}}
int main()
{
	std::cout<<first::add(1,1)<<std::endl;
	std::cout<<second::add(1.3,1.4)<<std::endl;
}	



