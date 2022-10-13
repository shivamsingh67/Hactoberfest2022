 https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1?page=1&category[]=Arrays&sortBy=submissions 

class Solution{
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int l = INT_MIN,s = 0;
        for(int i = 0; i < n;i++){
            s+=arr[i];
            if(l < s){
                l = s;
            }
            if(s < 0){
                s = 0;
            }
        }
        return l;
    }
};
