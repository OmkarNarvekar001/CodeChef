// Waiting Time Problem Code: WAITTIME

#include <bits/stdc++.h>
using namespace std;

int info(int k, int x){
    int res;
    res = k*7-x;
    return res;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int k,x;
	    int r;
	    cin>>k>>x;
	    r =info(k,x);
	    cout<<r<<endl;
	}
	return 0;
}
