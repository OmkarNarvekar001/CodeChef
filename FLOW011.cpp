// Gross Salary Problem Code: FLOW011

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    float a,gsal;
    cin>>a;
    if(a<1500){
      gsal=a+(a*0.1)+(a*0.9);
    }
    if(a>=1500){
      gsal=a+(500)+(a*0.98);
    }
    cout<<fixed<<setprecision(2)<<gsal<<endl;
  }
}