#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
    cin>>t;

    while(t--){
        int t1=0,t2=0;
        vector<int> a(10);
        for(int i=0;i<10;i++){
            cin>>a[i];
            if(i%2==0)
                t1+= (a[i]?1:0);
            else
                t2+= (a[i]?1:0);
        }
        
        (t1==t2)?(cout<<"0\n"):((t1>t2)?(cout<<"1\n"):(cout<<"2\n"));
    
    }
	return 0;
}
