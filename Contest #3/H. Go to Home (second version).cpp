// prolblem link ->https://codeforces.com/group/QI9pPpkbDH/contest/438351/problem/H

#include <bits/stdc++.h>
#define el '\n'
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7, OO = 0x3f3f3f3f;
vector<pair<int, int>> adj[1000006];
vector<int> dis(1000006);
vector<int> t(1000006);
int n, k;
void fast() { 
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}
void init()
{
  for (int i = 0; i <= 100; i++)
  {
    adj[i].clear();
    dis[i] = OO;
  }
}
void dij(int s)
{
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  pq.push({0, s});
  dis[s] = 0;
  while (!pq.empty())
  {
    int node = pq.top().second;
    int cost = pq.top().first;
    pq.pop();
    if (cost > dis[node])
      continue;
    for (auto i : adj[node])
    {
      int newCost = cost + i.second;
      if (newCost < dis[i.first])
      {
        pq.push({newCost, i.first});
        dis[i.first] = newCost;
      }
    }
  }
}
void doWork()
{
  cin >> n >> k;
  init();
  for (int i = 0; i < n; i++)
    cin >> t[i];
  for (int i = 0; i < n; i++)
  {
    int m;
    cin >> m;
    vector<int> f(m);
    for(auto &i : f)cin >> i;
    for (int j = 0; j < f.size(); j++)
    {
      for (int k = j + 1; k < f.size(); k++)
      {
        if (j == k)
          continue;
        int u = f[j];
        int v = f[k];
        int c = abs(u - v);
        adj[v].push_back({u, c * t[i] + min(60, u * 60)});
        adj[u].push_back({v, c * t[i] + min(60, u * 60)});
      }
    }
  }
  dij(0);
  cout << (dis[k] == OO ? "He will go by taxi" : to_string(dis[k])) << el;
}
int main()
{
  fast();
    doWork();
  return 0;
}