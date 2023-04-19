// problem link ->https://codeforces.com/group/QI9pPpkbDH/contest/438351/problem/B

#include <bits/stdc++.h>
#define el '\n'
using namespace std;
typedef long long ll;
const double EPS = 1e-6;
constexpr int mod = 1e9 + 7;
void fast()
{
  ios_base::sync_with_stdio(false);
  cout.tie(nullptr);
  cin.tie(nullptr);
}
long long maxScore(vector<int> &nums1, vector<int> &nums2, int k)
{
  vector<pair<int, int>> v;
  int n = nums1.size();
  for (int i = 0; i < n; ++i)
    v.push_back({nums2[i], nums1[i]});
  sort(v.rbegin(), v.rend());
  long long ans = 0;
  priority_queue<long long> pq;
  long long sum = 0;
  for (int i = 0; i < n; ++i)
  {
    sum += v[i].second;
    pq.push(-v[i].second);
    if (i >= k - 1)
    {
      ans = max(ans, sum * v[i].first);
      sum += pq.top();
      pq.pop();
    }
  }
  return ans;
}
int main()
{

  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  for (auto &i : a)
    cin >> i;
  for (auto &i : b)
    cin >> i;
  cout << maxScore(a, b, k);

  return 0;
}