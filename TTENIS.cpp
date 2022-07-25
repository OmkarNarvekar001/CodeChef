//Chef and Table Tennis Problem Code: TTENIS

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		int z = count(s.begin(),s.end(),'0');
		int y = count(s.begin(),s.end(),'1');
		if(z>y){
			cout<<"LOSE"<<endl;
		}
		else{
			cout<<"WIN"<<endl;
		}
	    
	}
}
