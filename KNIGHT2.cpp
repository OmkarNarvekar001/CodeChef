//Journey of the Knight Problem Code:KNIGHT2

#include <bits/stdc++.h>
using namespace std;

string output(int &x1, int &y1,int &x2, int &y2){
    int a = abs(x1-x2);
    int b = abs(y1-y2);
    int c = a-b;
    if(c%2==0){
    return "yes";
    }
    else{
        return "no";
    }
}

int main() {
	int t;
	int x1,x2,y1,y2;
	cin>>t;
	while(t--){
	    cin>>x1>>y1>>x2>>y2;
	    string res = output(x1,y1,x2,y2);
	    cout<<res<<endl;
	}
	return 0;
}
