#include <bits/stdc++.h>
#define int int64_t
using namespace std;

int distributeCandies(vector<int> candies)
{
    set<int>m;
    for(auto x: candies)
    {
        m.insert(x);
    }
    int ans=min(m.size(),candies.size()/2);
    return ans;
     
}
int32_t main()
{
    vector<int> candies{3,4,6,5};
    cout<<distributeCandies(candies)<<endl;
    
    return 0;
}