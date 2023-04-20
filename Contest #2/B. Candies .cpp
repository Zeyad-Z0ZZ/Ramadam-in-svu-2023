// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435891/problem/C

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  getchar();
  int i;
  string s;
  while (t--)
  {
    getline(cin, s);
    string temp;
    vector<string> ans;
    stringstream ss(s);
    while (ss >> temp)
      ans.push_back(temp);
    reverse(ans.begin(), ans.end());
    for (i = 0; i < ans.size(); i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
