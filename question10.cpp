#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int>x;
    x.empty()?printf("is empty"):printf("is not empty");
    x.insert(pair<int,int>(2,4));
    cout<<endl;
    x.empty()?printf("is empty"):printf("is not empty");
    return 0;
}