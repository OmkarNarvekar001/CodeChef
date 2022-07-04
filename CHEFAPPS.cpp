// Chef and his Apps Problem Code: CHEFAPPS
#include <bits/stdc++.h>
using namespace std;

int del(int &s, int &x, int &y, int &z){
    if((x+y+z)<=s){
        return 0;
    }
    else if ((s-x)>=z || (s-y)>=z){
         return 1;
    }
    else{
        return 2;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    int res = del(s,x,y,z);
	    cout<<res<<endl;
	}
	return 0;
}
