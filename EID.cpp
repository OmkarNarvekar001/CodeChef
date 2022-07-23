// Chef and Eid Problem Code: EID

#include <bits/stdc++.h>
using namespace std;

int eid(vector<int> &v)
{
  sort(v.begin(), v.end());
  int z = 100000;
  for (int i = 0; i < v.size() - 1; i++)
  {
    if (abs(v[i] - v[i + 1]) < z)
    {
      z = abs(v[i] - v[i + 1]);
    }
  }
  return z;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, a;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }
    int res = eid(v);
    cout << res << endl;
  }
}
