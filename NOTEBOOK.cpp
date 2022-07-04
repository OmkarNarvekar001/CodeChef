// Count the Notebooks Problem Code: NOTEBOOK

#include <iostream>
using namespace std;

int notebook(int &n){
   int z = 10*n;
   return z;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int res = notebook(n);
	    cout<<res<<endl;
	}
	return 0;
}
