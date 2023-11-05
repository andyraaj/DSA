#include<iostream>
using namespace std;
int main()
{ 
    int a;
cout<<"Enter the number to writa the table: ";
cin>>a;
for(int i=1;i<=10;i++)
{
    cout<<a<<" x ";
    cout<<i<<" ="<<a*i<<endl; 
}
    return 0;
}