// ATM MACHINE CodeATM2

#include <bits/stdc++.h>
using namespace std;

string atm (int &k, vector<int> &v){
    string s;
    for(int i=0;i<v.size();i++){
        if(v[i]<=k){
            k-= v[i];
            s.push_back('1');
        }
        else{
            s.push_back('0');
        }
    }
    return s;
}

int main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    int n,k,a;
	    vector<int> v;
	    cin>>n>>k;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        v.push_back(a);
	    }
	    string res = atm(k,v);
	    cout<<res<<endl;
	}
	return 0;
}
