//Ramnit here baby
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

int main() {
	fasterDaddy;
	int t;
    cin>>t;

    while(t--){
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            // int v[n][1];
            vector<vector<int>> grid(n, vector<int>(n, -1));
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    cout << grid[i][j] << " ";

                cout << endl;
            }
        }
        else
        {
            // int v[n][1];
            vector<vector<int>> grid(n, vector<int>(n, 1));

            int k = 0;
            for (int i = 0; i < n; i++)
            {
                grid[i][k] = -1;
                k++;
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    cout << grid[i][j] << " ";

                cout << endl;
            }
        }
    }
	return 0;
}