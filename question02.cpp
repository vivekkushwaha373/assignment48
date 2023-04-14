#include<bits/stdc++.h>
using namespace std;
int main()
{
   multimap<int,int>m1;
   m1.insert(pair<int,int>(1,2));
   m1.insert(pair<int,int>(4,2));
   m1.insert(pair<int,int>(6,2));
   m1.insert(pair<int,int>(3,2));
   m1.insert(pair<int,int>(9,2));
   multimap<int,int>m2(m1.begin(),m1.end());
   for(auto i=m2.begin();i!=m2.end();i++)
   {
    cout<<i->first<<" and "<<i->second<<endl;
   }
    return 0;
}