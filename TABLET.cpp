//Buying New Tablet Problem Code: TABLET

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (int i = 0;i<t;++i){
        int n,b,w,h,p,m=0;
        cin>>n>>b;
        for (int k = 0;k<n;++k){
        cin>>w>>h>>p;
        if(b>=p & w*h>=m){
            m = w*h;
        }
        }
    if (m==0){
        cout<<"no tablet"<<endl;
	}
	else{
        cout<<m<<endl;
	}
	}
	return 0;
}
