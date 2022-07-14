//Zero Ones Equal One Zeros Problem Code: ZOOZ

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<"0";
	    for(int i=1;i<=n-2;i++){
	        cout<<"1";
	    }
	    cout<<"0\n";
	}
	return 0;
}
