#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cout<<"Enter the limit: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
            cout<<"  ";
        }
        for(k=1;k<=n+1-i;k++)
        {
            cout<<"* ";
        }
        for(l=1;l<=n-i;l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}