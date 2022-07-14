//Program Your Own CALCULATOR Problem Code: URCALC

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    double a,b; 
    char c;
	cin>>a>>b>>c; 
	cout<<fixed;
	switch (c){
	    case '+':
	    cout<<a+b<<endl; break;
	    case '-':
	    cout<<a-b<<endl; break;
	    case '*':
	    cout<<a*b<<endl; break;
	    default:
	    cout<<setprecision(9)<<a/b<<endl; break;
	}
	
	return 0;
}
