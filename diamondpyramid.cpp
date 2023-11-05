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
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
      
        cout<<endl;
    }
 for(i=n;i>=1;i--){
        for(j=1;j<=n+1-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
 }   
    return 0;
} 