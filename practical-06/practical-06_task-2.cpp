#include<iostream>
#include<cstring>
using namespace std;

int main()
{
char arr[50];
bool b=true;
cout<<"Enter a string:"<<endl;
cin.getline(arr,50);

for(int i=0;i<strlen(arr);i++)
{
if(arr[i]!=arr[strlen(arr)-i-1])
{
b=false;
break;
}
}
if(b)
{
cout<<"string is palindrome"<<endl;
}
else
{
cout<<"string is not palindrome"<<endl;
}
return 0;
}
