#include<iostream>
using namespace std;
int main()
{
    int fact=1,n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    cout<<endl<<"The factorial of the number is: "<<fact;
    return 0;
}