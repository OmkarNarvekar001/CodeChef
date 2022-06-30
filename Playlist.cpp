// Playlist Problem Code: SONGS

#include <iostream>
using namespace std;

void song(int d, int j){
    if(d<j){
        cout<<0<<endl;
    }
    else{
        cout<<d/(3*j)<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int d,j;
        cin>>d>>j;
        song(d,j);
    }
	return 0;
}
