// Rating Improvement Problem Code: ADVANCE

#include <iostream>
using namespace std;

void rating(int X, int Y){
    
    if (Y>=X && Y<=(X+200)){
        cout<<"YES"<<endl;
    }
    
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int X,Y;
	    cin>>X>>Y;
	    rating(X,Y);
	}
	return 0;
}
