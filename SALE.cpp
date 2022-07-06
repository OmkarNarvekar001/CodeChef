// Get Lowest Free Problem Code: SALE

#include <bits/stdc++.h>
using namespace std;

int sale(int &a, int &b, int &c){
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    v.erase(v.begin());
    int k = v[0] + v[1];
    return k;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int res = sale(a,b,c);
        cout<<res<<endl;
    }
	return 0;
}
