

#include<iostream>
using namespace;
int main()
{
int a,b;
cin>>a>>b;
a ^= b; 
b ^= a; 
a ^= b;
cout<<a<<b;
}
