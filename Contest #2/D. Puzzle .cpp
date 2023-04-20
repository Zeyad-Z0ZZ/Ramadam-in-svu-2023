//problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435891/problem/E

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int n = s.length();
    vector<int> z(n), o(n);
    z[0] = (s[0] == '0');
    o[0] = (s[0] == '1');
    for (int i = 1; i < n; i++)
    {
      z[i] = z[i - 1] + (s[i] == '0');
      o[i] = o[i - 1] + (s[i] == '1');
    }
    int ans = min(z[n - 1], o[n - 1]);
    for (int i = 1; i < n; i++)
    {
      ans = min(ans, z[i - 1] + (o[n - 1] - o[i - 1]));
      ans = min(ans, o[i - 1] + (z[n - 1] - z[i - 1]));
    }
    cout << ans << endl;
  }
  return 0;
}
