// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     int n,k;
// //     cin>>n>>k;
// //     int a[k];
// //     for(int i=0;i<k;i++){
// //         cin>>a[i];
// //     }
// //     long mod = 1000000007;
// //     long ans=0;
// //     for(int i=0;i<k;i++){
// //         if(ans==0 && a[i]<=n){
// //             ans+=a[i]%10;
// //         }
// //         else if((a[i]%10==0 || a[i]%10==1) && a[i]<=n){
// //             ans+=a[i]%10;
// //         }
// //         else{
// //             ans*=a[i]%10;
// //             ans%=mod;
// //         }
// //     }
// //     cout<<ans%mod<<endl;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		long long n;
// 		cin>>n;
// 		if(n==3ll){
// 			cout<<"B"<<endl;
// 		}
// 		else
// 			cout<<"A"<<endl;
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int nums[] = {1, 2, 4, 8, 7, 5};

// int main() {
// 	int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         cout << nums[n % 6] << '\n';
//     }
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int getMaxScore (int k, vector<int> pages, int n) {
//     // Write your code here
    
//     return ans;
// }

// int main() {

//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n;
//     cin >> n;
//     int k;
//     cin >> k;
//     vector<int> pages(k);
//     for(int i_pages=0; i_pages<k; i_pages++)
//     {
//         cin >> pages[i_pages];
//     }
//     long long ans=0;
//     for(int i=0;i<k;i++){
//         if(pages[i]%10<2) ans+=(pages[i]%10);
//         else if(ans==0 && pages[i]%10>1) ans=pages[i]%10;
//         else ans=(ans*(pages[i]%10));
//         ans%=1000000007;
//     }
//     int out_;
//     out_ = getMaxScore(k, pages, n);
//     cout << out_;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		long long n;
// 		cin>>n;
// 		if(n==3ll){
// 			cout<<"B"<<endl;
// 		}
// 		else
// 			cout<<"A"<<endl;
// 	}
// }


// // import sys
 
// // # m is size of coins array (number of different coins)
// // def minCoins(coins, m, V):
 
// //     # base case
// //     if (V == 0):
// //         return 0
 
// //     # Initialize result
// //     res = sys.maxsize
     
// //     # Try every coin that has smaller value than V
// //     for i in range(0, m):
// //         if (coins[i] <= V):
// //             sub_res = minCoins(coins, m, V-coins[i])
 
// //             # Check for INT_MAX to avoid overflow and see if
// //             # result can minimized
// //             if (sub_res != sys.maxsize and sub_res + 1 < res):
// //                 res = sub_res + 1
 
// //     return res


#include<bits/stdc++.h>
using namespace std;

int mincoins(int coins[],int n,int v){
    if(v==0) return 0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(coins[i]<=v){
            int sub_ans=mincoins(coins,n,v-coins[i]);
            if(sub_ans!=INT_MAX && sub_ans+1<ans) ans=sub_ans+1;
        }
    }
    return ans;
}

int main(){
	int coins[]={9,6,5,1};
    int m=sizeof(coins)/sizeof(coins[0]);
    int V=11;
    cout<<mincoins(coins,m,V)<<endl;
}