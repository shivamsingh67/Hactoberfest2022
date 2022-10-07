//Ramnit here
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

int main() {
	faster;
	int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>m>>n;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        vector<vector<int>> grid(m,vector<int>(n));
        // grid[x1-1][y1-1]=1;
        // grid[x2-1][y2-1]=2;
        // auto copy = grid;
        // set<int> st;
        // for(int i=1;i<100;i++) st.insert(i);
        // queue<pair<int,int>> que;
        // que.push({x1-1,y1-1});
        // que.push({x2-1,y2-1});
        // while(!que.empty()){
        //     auto cur = que.front();
        //     que.pop();
        //     if(cur.first+1<n && grid[cur.first+1][cur.second]==0){
        //         grid[cur.first+1][cur.second]=grid[cur.first][cur.second]+1;
        //         que.push({cur.first+1,cur.second});
        //     }
        // }

        x1--;x2--;
        y1--;y2--;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i+j)%2==(x1+y1)%2){
                    grid[i][j]=1;
                }
                else{
                    grid[i][j]=2;
                }
            }
        }

        if((x1+y1)%2==(x2+y2)%2){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(grid[i][j]==2){
                        grid[i][j]=3;
                    }
                }
            }
            grid[x2][y2]=2;
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
	return 0;
}