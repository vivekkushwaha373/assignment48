#include<bits/stdc++.h>
using namespace std;
int main()
{
   multimap<int,int>m1;
   m1.insert(pair<int,int>(1,2));
   m1.insert(pair<int,int>(1,4));
   m1.insert(pair<int,int>(4,2));
   m1.insert(pair<int,int>(6,2));
   m1.insert(pair<int,int>(3,2));
   m1.insert(pair<int,int>(9,2));
   auto i=m1.find(1);
   cout<<i->first<<" "<<i->second;
}