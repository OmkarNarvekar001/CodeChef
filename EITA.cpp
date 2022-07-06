//Maximum Production Problem Code: EITA

#include <bits/stdc++.h>
using namespace std;

int work(int &d,int &x,int &y,int &z){
    int r1= x*7;
    int r2= ((d*y)+((7-d)*z));
    return max(r1,r2);
   
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int d,x,y,z;
	    cin>>d>>x>>y>>z;
	    int res = work(d,x,y,z);
	    cout<<res<<endl;
	}
	return 0;
}
