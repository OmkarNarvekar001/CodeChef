// Burgers Problem Code: BURGERS

#include <bits/stdc++.h>
using namespace std;

int burger(int p, int b){
    if(p==b){
        return p;
    }
    else if(p>b){
        return b;
    }
    else{
        return p;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p,b;
	    int res;
	    cin>>p>>b;
	    res = burger(p,b);
	    cout<<res<<endl;
	}
	return 0;
}
