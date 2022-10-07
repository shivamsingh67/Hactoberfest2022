#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    char ch;
	    cin>>ch;
	    if(ch=='b' || ch=='B') cout<<"BattleShip\n";
	    if(ch=='c' || ch=='C') cout<<"Cruiser\n";
	    if(ch=='d' || ch=='D') cout<<"Destroyer\n";
	    if(ch=='f' || ch=='F') cout<<"Frigate\n";
	}
	return 0;
}
