
https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category[]=Arrays&sortBy=submissions
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum = 0,acSum = 0;
        for(int i = 0; i < n-1; i++){
            sum +=array[i];
        }
        
        acSum = ((n)*(n+1))/2;
        
        return (acSum - sum);
    }
};
