#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    l.push_back(29);
    l.push_back(69);
    l.push_back(259);
    l.push_back(2943);
    l.push_back(293);
    l.push_front(23429);

   cout<<l.front()<<" "<<l.back()<<endl;
cout<<l.size()<<endl;

for(auto it=l.begin();it!=l.end();it++)
{
    cout<<*it<<" ";
    
}
for(auto it=l.rbegin();it!=l.rend();it++)
{
    cout<<*it<<" ";
}
}