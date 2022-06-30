//Subscriptions Problem Code: SUBSCRIBE_

#include <bits/stdc++.h>
using namespace std;

int cost(int n, int x){
    int z = n / 6;
    if(n%6!=0){
        z++;
    }
    z = z*x;
    return z;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    int res;
	    cin>>n>>x;
	    res = cost(n,x);
	    cout<<res<<endl;
	}
	return 0;
}

