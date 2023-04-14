#include<bits/stdc++.h>
using namespace std;
int main()
{
   multimap<int,int>x;
   x.insert(pair<int,int>(1,2));
   x.insert(pair<int,int>(1,2));
   x.insert(pair<int,int>(1,2));
   x.insert(pair<int,int>(1,2));
   x.insert(pair<int,int>(1,2));
   for(auto i=x.begin();i!=x.end();i++)
   {
    cout<<i->first<<" and "<<i->second<<endl;
   }

    return 0;
}