vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int rest=target-nums[i];
            if(mp.find(rest)!=mp.end()){  //mil gya
                //for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
                vector<int>ans;
            
                ans.push_back(mp[rest]);
                ans.push_back(i);
                return ans;
            }else{
                mp[nums[i]]=i;
            }
        }
        return {};
    }
