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
   multimap<int,int>m2;
   m2.insert(pair<int,int>(1,2));
   m2.insert(pair<int,int>(2,2));
   m2.insert(pair<int,int>(76,2));
   m2.insert(pair<int,int>(7,2));
   m2.insert(pair<int,int>(21,2));
   m2.swap(m1);
   for(auto i=m2.begin();i!=m2.end();i++)
   {
    cout<<i->first<<" and "<<i->second<<endl;
   }
   cout<<endl;
   for(auto i=m1.begin();i!=m1.end();i++)
   {
    cout<<i->first<<" and "<<i->second<<endl;
   }
    return 0;
}