// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/438351/problem/E

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, t, z, cnt = 0;
  cin >> n >> t;
  for (int a = 0; a < n; a++)
  {
    cin >> z;
    if (z >= t)
      cnt = a + 1;
  }
  cout << cnt;
  return 0;
}