// Practice makes us perfect Problem Code: PRACTICEPERF

#include <bits/stdc++.h>
using namespace std;

void target(int a, int b, int c, int d){
    int z =10;
    int ctr=0;
    vector<int>vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);
    for(int i=0;i<vec.size();i++){
        if(vec[i]>=z){
            ctr++;
        }
    }
    cout<<ctr<<endl;
}

int main() {
	// your code goes here
	int p1,p2,p3,p4;
	cin>>p1>>p2>>p3>>p4;
	target(p1,p2,p3,p4);
	return 0;
}
