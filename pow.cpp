#include<iostream>
using namespace std;
int main()
{
    int pow,i,n,num=1;
    cout<<"Enter a number to find the power: ";

    cin>>n;

    cout<<"Enter a the power: ";

    cin>>pow;
    for(i=1;i<=pow;i++){
        num=num*n;

    }
    cout<<"The answer of powered number is: "<<num<<endl;

    return 0;
}