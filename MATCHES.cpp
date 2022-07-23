// Playing with Matches Problem Code: MATCHES

#include <bits/stdc++.h>
using namespace std;

int  matches(int &x, int &y){
  vector<int> a={6,2,5,5,4,5,6,3,7,6};

  int k = x +y;
  int ans = 0;
  int temp = k;
  int rem;
  do{
    rem=temp%10;
    ans = ans + a.at(rem);
    temp=temp/10;
  }while(temp!=0);
  return ans;
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    int res = matches(a,b);
    cout<<res<<endl;
  }
}

