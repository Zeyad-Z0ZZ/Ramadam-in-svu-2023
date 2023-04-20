// prolem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435833/problem/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  char c;
  string s = "";
  while (n--)
  {
    cin >> c;
    s += c;
  }
  reverse(s.begin(), s.end());
  int carry = 0;
  for (int i = 0; i < s.size(); i++)
  {
    int x = s[i] - '0' + k % 10 + carry;
    k /= 10;
    if (carry)
      carry--;
    if (x > 9)
    {
      s[i] = (x % 10) + '0';
      carry++;
    }
    else
    {
      s[i] = x + '0';
    }
  }
  while (k)
  {
    int x = k % 10 + carry;
    k /= 10;
    if (x > 9)
    {
      s += (x % 10) + '0';
      carry++;
    }
    else
    {
      s += x + '0';
    }
  }
  if (carry)
    s.push_back(carry + '0');
  reverse(s.begin(), s.end());
  for (auto t : s)
    cout << t << " ";
}
