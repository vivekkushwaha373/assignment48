#include<bits/stdc++.h>
using namespace std;
int main()
{
   multimap<int,int>x;
   int arr[6]={1,2,3,4,5,6};
   for(int i=0;i<6;i++)
   {
    x.insert(pair<int,int>(arr[i],i));
   }
   auto i=x.find(1);
   if(i==x.end())
   cout<<"Not found";
   else
   {
    cout<<"Erased X";
   }
    return 0;
}