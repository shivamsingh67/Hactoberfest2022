#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int car[n];
        for(int i=0;i<n;i++){
            cin>>car[i];
        }
        
        int m=car[0],count=0;
        for(int i=0;i<n;i++){
            if(car[i]<=m) 
                count++;
                
            m=min(m,car[i]);
        }
        cout<<count<<"\n";
    }
	return 0;
}
