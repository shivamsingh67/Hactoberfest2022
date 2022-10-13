#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,l;
	    cin>>n>>m>>l;
	    int k[m];
	    int arr[m][n];
	    for(int i=0;i<m;i++){
	        cin>>k[i];
	        for(int j=0;j<k[i];j++){
	            cin>>arr[i][j];
	        }
	    }
	    int strip[l];
	    for(int i=0;i<l;i++){
	        cin>>strip[i];
	    }
	    for(int i=0;i<m;i++){
	        for(int j=0;j<k[i];j++){
	            for(int p=0;p<l;p++){
	                if(strip[p]==arr[i][j]){
	                    strip[p]=i;
	                }
	            }
	        }
	    }
	    int count=1;
	    for(int i=1;i<l;i++){
	        if(strip[i]!=strip[i-1]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
