#include<iostream>
using namespace std;
int main()
{
int curr,n,i,last=0,prev=1;
cout<<"Enter the no. of terms: ";
cin>>n;
if (n<1){
    cout<<"Invalid choice"<<endl;
return 0;
}
else if(n==1){
cout<<last;
return 0;
}
else if(n==2){
cout<<last<<" "<<prev<<endl;
return 0;}

else {
    cout<<last<<" "<<prev<<" ";
    for(i=3;i<=n;i++)
    {
        curr=prev+last;
        cout<<curr<<" ";
        last=prev;
        prev=curr;
        

    }
    return 0;
}
    return 0;
}