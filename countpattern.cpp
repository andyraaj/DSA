#include<iostream>
using namespace std;

int main()
{
    int i,j,n,sum=0;
   
 cout<<"Enter the limit: ";
    cin>>n;  
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++){
        ++sum;
        cout<<sum<<" ";
    }
cout<<endl;
}

    return 0;
}