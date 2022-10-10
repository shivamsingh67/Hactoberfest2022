#include<bits/stdc++.h>
#define int int64_t
using namespace std;
 
int countTriplets(vector<int> nums) {
    unordered_map<int,int>st;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            int val=nums[i]&nums[j];
            st[val]+=1;       
        }   
    }
    int ans=0;
    for (int i = 0; i < nums.size(); i++)
    {
        for(auto it: st)
        {
            if((nums[i]& it.first)==0)
            {
                ans+=it.second;
            }
        }
    }
    return ans;
    
}
int32_t main()
{
    vector<int>v={2,1,3};

    cout<<countTriplets(v);
    return 0;
}