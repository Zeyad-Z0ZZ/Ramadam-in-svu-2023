//problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/M

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ed '\n'
using namespace std;
void fast()
{ // for VS code
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    fast();
    ll n, w, h;
    cin >> n;
    int a[n];
    map<int, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll cnt = 0, last = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] != last)
        {
            mp[last] += cnt * (cnt + 1) / 2;
            cnt = 0;
        }
        cnt++;
        last = a[i];
    }
    mp[last] += cnt * (cnt + 1) / 2;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
return 0;
}
