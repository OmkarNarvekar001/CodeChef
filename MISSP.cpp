// Chef and Dolls Problem Code: MISSP

#include <bits/stdc++.h>
using namespace std;

int doll(vector<int> &v){
	int k=0;
    for(int i=0;i<v.size();i++){
		k=k^v[i];
	}
	return k;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int n;
	    vector<int> v;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        v.push_back(a);
	    }
	    int res = doll(v);
	    cout<<res<<endl;
	    
	}
	return 0;
}
