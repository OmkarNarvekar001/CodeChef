// Counting Pretty Numbers Problem Code: NUM239

#include <bits/stdc++.h>
using namespace std;

void pretty(int l, int r){
    int ctr=0;
    for(int i=l;i<=r;i++){
        if(i%10==3 || i%10==2 || i%10==9){
            ctr++;
        }
    }
    cout<<ctr<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int l,r;
	    cin>>l>>r;
	    pretty(l,r);
	}
	return 0;
}
