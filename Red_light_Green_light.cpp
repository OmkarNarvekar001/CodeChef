// Red Light, Green Light Problem Code: DOLL


#include <bits/stdc++.h>
using namespace std;

int shoot(int n, int k, vector<int> v){
    int ctr=0; 
    for(int i=0;i<n;i++){
        if(v[i]>k){
            ctr++;
        }
    }
   return ctr; 
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,a;
	    vector<int> v;
	    cin>>n>>k;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        v.push_back(a);
	    }
	    int res = shoot(n,k,v);
	    cout<<res<<endl;
	}
	return 0;
}
