// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll x, y;
  cin >> x >> y;
  y %= x;
  int arr[x];
  for (int i = 0; i < x; i++)
  {
    cin >> arr[i];
  }
  for (int i = x - y; i <= x - 1; i++)
  {
    cout << arr[i] << " ";
  }
  for (int i = 0; i < x - y; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}