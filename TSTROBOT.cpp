// Testing Robot Problem Code: TSTROBOT

#include <bits/stdc++.h>
using namespace std;

int points(string &s, int &x){
  set<int> so;
  so.insert(x);
  for(int i=0;i<s.size();i++){
    if(s[i]=='R'){
      x++;
    }
    else{
      x--;
    }
    so.insert(x);
  }
  return so.size();
  
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,x;
    string s;
    cin>>n>>x;
    cin>>s;
    int res = points(s,x);
    cout<<res<<endl;
  }
}

