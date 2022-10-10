#include <bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> encoded)
{
    vector<int>v;
    int cnt = 0;
    int number = encoded[0];

    while ((number & 1) == 0){
        cnt++;
        number = number >> 1;
    }
    int x = pow(2, cnt);
    v.push_back(x);
    int val=0;
    for (int i = 0; i < encoded.size(); i++)
    {
        val= v[i]^encoded[i];
        v.push_back(val);
    }
    return v;

}
int main()
{
    vector<int> encoded = {6, 5, 4,6};
    decode(encoded);

    vector<int> a = decode(encoded);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}