// Age Limit Problem Code: AGELIMIT

#include <iostream>
using namespace std;

void eligible(int x, int y, int a){
    if(a>=x && a<y){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,a;
	    cin>>x>>y>>a;
	    eligible(x,y,a);
	}
	return 0;
}
