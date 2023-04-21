// problem link -> hhttps://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  if (m > n)
  {
    cout << -1;
    return 0;
  }
  int ans = 0;
  for (int i = min(n / 8, m); i >= 0; --i)
  {

    int rest = n - 8 * i;
    int Mrest = m - i;
    if (Mrest == 1 && rest == 4)
      continue;
    if (Mrest > rest || (!Mrest and rest))
      continue;
    cout << i << "\n";
    return 0;
  }
  cout << -1;

  /// end of the main
}
