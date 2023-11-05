#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
   
 cout<<"Enter the limit abc pattern: ";
    cin>>n;  
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++){
        char c='a'+j-1;

        cout<<c<<" ";
    }
cout<<endl;
}

    return 0;
}