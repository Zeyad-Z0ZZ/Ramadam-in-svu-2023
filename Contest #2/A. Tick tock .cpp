// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435891/problem/B

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;
long long n, m, counter = 0;
long long mod = 1e9 + 7;
int main()
{
  fast int n, k;
  cin >> n >> k;
  vector<ll> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  ll maxsize = *max_element(v.begin(), v.end());
  ll l = 1;
  while (l < maxsize)
  {
    int cnt = 0;
    int mid = (l + maxsize) / 2;
    for (int x : v)
      cnt += (x - 1) / mid;
    if (cnt > k)
      l = mid + 1;
    else
      maxsize = mid;
  }
  cout << l;
}
