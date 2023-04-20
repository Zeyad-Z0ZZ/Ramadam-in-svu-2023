// prolem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435891/problem/I

#include <bits/stdc++.h>
#define ll long long
#define el '\n'
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m;
  cin >> n >> m;
  int ans = 0;
  vector<vector<int>> graph(n);
  vector<int> inDegree(n);
  queue<int> q;
  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;
    u--, v--;
    graph[u].push_back(v);
    ++inDegree[v];
  }
  for (int i = 0; i < n; ++i)
    if (inDegree[i] == 0)
      q.push(i);
  while (!q.empty())
  {
    for (int sz = q.size(); sz > 0; --sz)
    {
      int u = q.front();
      q.pop();
      --n;
      for (const int v : graph[u])
        if (--inDegree[v] == 0)
          q.push(v);
    }
    ++ans;
  }
  cout << (n == 0 ? ans : -1);
}
