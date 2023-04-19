// prolblem link -> https://codeforces.com/group/QI9pPpkbDH/contest/438351/problem/I

#include <bits/stdc++.h>
#define el '\n'
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
void fast()
{
  ios_base::sync_with_stdio(false);
  cout.tie(nullptr);
  cin.tie(nullptr);
}
int main()
{
  fast();
  string s;
  cin >> s;
  ll n = 1;
  for (int i = 0; i < s.size(); i++)
  {
    int b = s[i] - 'a' + 1;
    n = (n * b) % mod;
  }
  cout << n << endl;
  return 0;
}