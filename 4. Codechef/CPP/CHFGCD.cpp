#include <iostream>
using namespace std;

int gcd(long long a,long long b){
    if(a<b){
        long long temp=a;
        a=b;
        b=temp;
    }
    while(b!=0){
        long long rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long x,y;
	    cin>>x>>y;
	    
	    if(gcd(x,y)!=1 || gcd(x,y)!=1 || (x%2==0 && y%2==0)){
	        cout<<"0"<<endl;
	    }
	    
	    else if(gcd(x,y+1)!=1 || gcd(x+1,y)!=1){
	        cout<<"1"<<endl;
	    }
	    
	    else{
	        cout<<"2"<<endl;
	    }
	    
	    
	   // if(gcd(x,y)==x || gcd(x,y)==y){
	   //     cout<<"0"<<endl;
	   // }
	    
	   // else{
	   //     int ans=0;
	   //     if(x<y){
	   //         for(int i=1;i<=x;i++){
	   //             ans++;
	   //             if(gcd(x,y+i)!=1){
	   //                // ans=i-x;
	   //                 break;
	   //             }
	   //             if(gcd(x+i,y)!=1){
	   //                // ans=i-x;
	   //                 break;
	   //             }
	   //         }
	   //     }
	   //     else{
	   //         for(int i=1;i<=y;i++){
	   //             ans++;
	   //             if(gcd(x+i,y)!=1){
	   //                // ans=i-y;
	   //                 break;
	   //             }
	   //             if(gcd(x,y+i)!=1){
	   //                // ans=i-y;
	   //                 break;
	   //             }
	   //         }
	   //     }
	   //     cout<<ans<<endl;
	   // }
	}
	return 0;
}
