#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,nsp=0,l;
    cout<<"Enter the limit: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++)
        {
            cout<<"*  ";
        }
        for(k=1;k<=nsp;k++)
        {
            cout<<"   ";
        }
        nsp+=2;
           for(l=1;l<=n+1-i;l++)
        {
            cout<<"*  ";
        }
        
        cout<<endl;
    }
    nsp=nsp-2;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
            cout<<"*  ";
        }
        for(k=nsp;k>=1;k--)
        {
            cout<<"   ";
        }
        nsp-=2;
           for(l=1;l<=i;l++)
        {
            cout<<"*  ";
        }
        
        cout<<endl;
    }

    return 0;
}