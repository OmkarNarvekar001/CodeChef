//Count the ACs Problem Code: ACS

#include <bits/stdc++.h>
using namespace std;

int problem(int &p){
    int a = p/100;
    int b= p%100;
    if((a+b)<=10){
        return a+b;
    }
    else{
        return -1;
    }
    
}

int main() {
	int t ;
	cin>>t;
	while(t--){
	    int p;
	    cin>>p;
	    int res = problem(p);
	    cout<<res<<endl;
	}
	return 0;
}


