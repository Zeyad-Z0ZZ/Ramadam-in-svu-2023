// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/438351/problem/A

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
string s;
int dp[5005][5005];
int DP(int i, int j)
{
    if (i == j)
        return 1;
    if (i + 1 == j)
        return 2 + (s[i] == s[j]);
    int &ret = dp[i][j];
    if (~ret)
        return ret;
    ret = 0;
    if (s[i] == s[j])
        ret += DP(i + 1, j - 1) + 1;
    ret = (ret % mod + DP(i + 1, j) % mod) % mod;
    ret = (ret % mod + DP(i, j - 1) % mod) % mod;
    ret = (ret % mod - DP(i + 1, j - 1) % mod) % mod;
    return (ret + mod) % mod;
}
void doWork(int tt)
{
}
int main()
{
    fast();
    cin >> s;
    memset(dp, -1, sizeof(dp));
    cout << DP(0, s.size() - 1);
    return 0;
}