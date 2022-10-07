https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        
       int i=0, j=height.size()-1, area=-1;
        while(i<j){
            int h=min(height[i], height[j]);
            area=max(area, h*(j-i));
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return area;
    }
};
