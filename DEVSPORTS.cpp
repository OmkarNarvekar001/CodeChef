// Devendra and Water Sports Problem Code: DEVSPORTS

#include <bits/stdc++.h>
using namespace std;

string watersport(int &z,int &y, int &a,int &b,int &c){
    int k = z-y;
    int o = a+b+c;
    if(k>=o){
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
	    int z,y,a,b,c;
	    cin>>z>>y>>a>>b>>c;
	    string s = watersport(z,y,a,b,c);
	    cout<<s<<endl;
	}
	return 0;
}
