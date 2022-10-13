int solve(vector<int>nums)
    {
         int rob1=0,rob2=0;
         int n=nums.size();
         //take either previous or 2nd previous+arr[ele] bcoz this is not adjcent so we can include curr ele
         for(int i:nums)
       {
        int temp=max(rob1+i,rob2);
         rob1=rob2;
         rob2=temp;  
       }
        return rob2;
    }
    int rob(vector<int>& nums) {
        //we have to add a constrain that if we're robbing the 1st house then we can not
        //rob the last house and vice versa
        //so let's solve for including last and not including last element both and print the max of that
        if(nums.size()==1)
           return nums[0];
        int rob1=0,rob2=0,n=nums.size();
       return max(solve(vector<int>(nums.begin(),nums.end()-1)), solve(vector<int>(nums.begin()+1, nums.end())));
    }
