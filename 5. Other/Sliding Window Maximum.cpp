class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        /*
        vector<int>ans;
        int n = nums.size();
        int i = 0, j = 0;
        
        int sum = 0;
        int Mx = INT_MIN;
        while(j < n){
            sum += nums[j];
            
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                sum = sum - nums[i];
                i++;
                j++;
                ans.push_back(sum);
            }
            
            
        }
        return ans;
        */
          priority_queue<pair<int,int>>pq;
        vector<int>res;
        int ind=0;
        for(ind=0;ind<k;ind++){
            pq.push({nums[ind],ind});
        }
        res.push_back(pq.top().first);
        for(int i=ind;i<nums.size();i++){
            pq.push({nums[i],i});
            while(pq.top().second<=i-k) pq.pop();
            res.push_back(pq.top().first);
        }
        return res;
        
    }
};
