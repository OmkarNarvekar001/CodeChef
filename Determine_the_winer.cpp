// Determine the Winner Problem Code: WINNERR

#include <bits/stdc++.h>
using namespace std;

void winner(int a, int b, int c, int d){
    int x,y;
    x=max(a,b);
    y=max(c,d);
    
    if(x>y){
        cout<<"Q"<<endl;
    }
    else if(x==y){
        cout<<"TIE"<<endl;
    }
    else{
        cout<<"P"<<endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    winner(a,b,c,d);
	}
	return 0;
}
