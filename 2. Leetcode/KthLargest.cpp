#include<bits/stdc++.h>
#define int int64_t
using namespace std;

int findKthLargest(vector<int>nums,int k)
{
    multiset<int>m;
    for (int i = 0; i < nums.size(); i++)
    {
        m.insert(nums[i]);
    }
    auto it=m.end();
    for(int i=0;i<k;i++){
        it--;
    }
    return *it;
    
}
int32_t main()
{
    vector<int>nums{3,2,3,1,2,4,5,5,6};
    int k=1;
    cout<<findKthLargest(nums,k);
    
    return 0;
}