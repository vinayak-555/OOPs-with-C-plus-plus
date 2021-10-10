#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
 int ch;
 cout<<"1 = reverse function \n2 = reverse iterator\n";
 cout<<"Enter your choice ";
 cin>>ch;
 string str;
 cout<<"Enter your string ";
 cin>>str;
 int n=str.size();
 
 
 switch(ch)
 {
  case 1:
     reverse(str.begin(),str.end());
     cout<<str;
     
  break;
  
  case 2:
    for(auto it = str.rbegin(); it != str.rend(); ++it) 
      cout << *it;
    break;
  
 }
    return 0;
}
