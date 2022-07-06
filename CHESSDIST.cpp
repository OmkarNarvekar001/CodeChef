// Chessboard Distance Problem Code: CHESSDIST

#include <bits/stdc++.h>
using namespace std;

int dist(int &x1, int &y1, int &x2, int &y2){
    int a = abs(x1-x2);
    int b = abs(y1-y2);
    int k = max(a,b);
    return k ;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int res = dist(x1,y1,x2,y2);
	    cout<<res<<endl;
	}
	return 0;
}
