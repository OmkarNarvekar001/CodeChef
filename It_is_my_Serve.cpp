// It is My Serve Problem Code: MYSERVE

#include<bits/stdc++.h>
using namespace std;

string serve(int &p, int &q){
    int add = (p+q)/2;
    if(add%2==0){
        return "ALICE";
    }
    else{
        return "BOB";
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p,q;
	    cin>>p>>q;
	    string res = serve(p,q);
	    cout<<res<<endl;
	}
	return 0;
}
