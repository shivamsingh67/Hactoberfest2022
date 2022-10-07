class Solution {
public:
    bool check(string s, int i, int j){
        while(i<j){
            if(s[i]!=s[j])return false;
            i++, j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        if(s.size()==1)return s;
        int n=s.size(); string ans;ans+=s[0];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int flag=0;
                if(check(s, i,j)){
                    string temp=s.substr(i, (j-i+1));
                   
                    if(temp.size()>ans.size())
                        ans=temp;
                }
            }
        }
        return ans;
    }
};
