#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int q[4];
	    int count[10]={};
	    for(int i=0;i<4;i++){
	        cin>>q[i];
	        count[q[i]-1]++;
	    }
	    int c=0,x=0,y;
	    for(int i=0;i<10;i++){
	        if(count[i]!=0){
	            c++;
	        }
	        if(count[i]==2){
	            x++;
	        }
	        if(count[i]==3){
	            y=1;
	        }
	    }
	    
	    if(c==3 || c==4){
	        cout<<"2"<<endl;
	    }
	    else if(c==2 && x==2){
	        cout<<"2"<<endl;
	    }
	    else if(c==2 && y==1){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}