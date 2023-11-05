#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
   
 cout<<"Enter the limit aaa pattern: ";
    cin>>n;  
for(i=1;i<=n;i++)
{char c='a'+i-1;
    for(j=1;j<=n;j++){
        cout<<c<<" ";
    }
cout<<endl;
}

    return 0;
}