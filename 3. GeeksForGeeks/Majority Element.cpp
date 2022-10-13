
https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&category[]=Arrays&sortBy=submissions

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        
        // your code here
        int ans = -1;
        unordered_map<int,int>mp;
        for(int i = 0; i < n; i++){
            mp[a[i]]++;
        }
        int  k = n/2;
        
        for(auto i : mp){
            if(i.second > k){
                ans = i.first;
            }
        }
        return ans;
        
    }
};
