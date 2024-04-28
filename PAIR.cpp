#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
// pair<string,int>p;
// p=make_pair("Anand",20);

// cout<<p.first<<" "<<p.second<<endl;

// p.first="anand";
// p.second=70;

// cout<<p.first<<" "<<p.second<<endl;
// //pair of string,age,weight
pair<string,pair<int,int>>p;
p=make_pair("Andy",make_pair(20,69));

cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

p.first="Andy raj";
p.second.first=99;
p.second.second=100;

cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

}