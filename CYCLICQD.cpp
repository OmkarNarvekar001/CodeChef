//Cyclic Quadrilateral Problem Code: CYCLICQD

#include <bits/stdc++.h>
using namespace std;

string cyclic(int &a, int &b, int &c, int &d){
    int s1 = a+c;
    int s2 = b+d;
    if(s1==180 || s2 == 180){
        return "yes";
    }
    else{
        return "no";
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    string s = cyclic(a,b,c,d);
	    cout<<s<<endl;
	}
	return 0;
}
