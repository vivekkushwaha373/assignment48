#include<bits/stdc++.h>
using namespace std;
int main()
{
   multimap<int,int>x;
   x.insert(pair<int,int>(7,2));
   x.insert(pair<int,int>(7,5));
   x.insert(pair<int,int>(2,3));
   x.insert(pair<int,int>(6,5));
   x.insert(pair<int,int>(3,7));
   auto i=x.upper_bound(3);
   cout<<i->first<<" "<<i->second;
    return 0;
}