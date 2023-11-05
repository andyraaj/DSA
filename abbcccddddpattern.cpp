#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the limit: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
            char name='a'+i-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}