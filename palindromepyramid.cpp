#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cout<<"Enter the limit: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++)
        {
            cout<<"  ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<k<<" ";
        }
        for(l=i-1;l>=1;l--)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
} 