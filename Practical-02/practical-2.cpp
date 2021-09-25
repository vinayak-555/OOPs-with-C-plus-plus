#include<iostream>
using namespace std;

//Vinayak_200111339_C

int main()
{
	int i,num,c=0;
	cout<<"Enter the number:";
	cin>>num;
	
	//Finding the sqrt of num
	float half=num/2,temp=0;
	while(half!=temp)
	{
	   temp=half;
	   half=(num/half + temp)/2;
	}
	
	for(i=2;i<=half;i++)
	{
  	   if(num%i==0)
  	   {  c++; }
  	}
  	
  	if(num==1||num==0)
  	{   cout<<"Not Prime\n";	}
  	else if(c==0)
  	{   cout<<"Not Prime\n";	}
  	else
  	{   cout<<"Prime Number\n";  }
  	
 }
