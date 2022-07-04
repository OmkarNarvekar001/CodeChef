// Chef and Bird farm Problem Code: BIRDFARM

#include <iostream>
using namespace std;

string farm(int &x, int &y, int &z){
    if(z%x==0 && z%y==0){
        return "any";
    }
    if(z%x==0){
        return "chicken";
    }
    if(z%y==0){
        return "duck";
    }
    else{
        return "none";
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	   string s = farm(x,y,z);
	   cout<<s<<endl;
	}
	return 0;
}
