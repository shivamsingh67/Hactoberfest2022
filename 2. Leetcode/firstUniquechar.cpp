#include <bits/stdc++.h>
#define int int64_t
using namespace std;

int firstUniqueChar(string s)
{
    //sort(s.begin(), s.end());
    int index = 0;
    int flag = 0,i=0;
    while(i!=s.length())
    {
        if (count(s.begin(),s.end(),s[i])==1)
        {
            return i;
        } 
        i++;  
    }
    return -1;
}
int32_t main()
{
    string s;
    cin >> s;
    cout<<firstUniqueChar(s)<<endl;

    return 0;
}