#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter the limit: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;

    }
    cout<<endl<<"The sum is: "<<sum;
    return 0;
}