#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int maximumScore(int a, int b, int c)
{
   multiset<int>s;
   s.insert({a,b,c});
   int count=0;
   while (*(++s.begin())!=0)
   {
        int x=*(++s.begin()) -1;   
        int y=*(--s.end()) -1;   
        s.erase(++s.begin());
        s.erase(--s.end());
        s.insert(x);
        s.insert(y);
        count+=1;
   }
   return count;
   
}
int32_t main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << maximumScore(a, b, c);

    return 0;
}