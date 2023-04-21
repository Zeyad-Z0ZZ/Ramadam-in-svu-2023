// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/E


#include <bits/stdc++.h>
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);
using namespace std;
int main()
{
  string s;
  cin >> s;
  char c = '9';
  for (auto &it : s)
    c = min(c, it);
  int n = s.size();
  if (c == '0')
    n = 1;
  while (n--)
    cout << c;
}
