// Chef and Employment Test Problem Code: CK87MEDI

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
   int n,k,a;
   vector<int> v;
   cin>>n>>k;
   for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
   }
   sort(v.begin(),v.end());
   cout<<v[(n+k)/2]<<endl;
  }
}
