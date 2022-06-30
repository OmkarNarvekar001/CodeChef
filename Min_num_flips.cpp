// Minimum number of Flips Problem Code: MINFLIPS

#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum = sum + v[i];
    }
    if(sum%2!=0){
        return -1;
    }
	    else
	    {
	        sum=abs(sum);
	        return sum/2;
	    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int l,a;
	    vector<int> v;
	    cin>>l;
	    for(int i=0;i<l;i++){
	        cin>>a;
	        v.push_back(a);
	    }
	   int final =  sum(v);
	   cout<<final<<endl;
	}
	return 0;
}
