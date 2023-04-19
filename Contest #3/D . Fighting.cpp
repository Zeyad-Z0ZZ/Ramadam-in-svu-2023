// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/438351/problem/F

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, z, st, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (int a = 0; a < n; a++)
    {
        cin >> v[a];
        st = v[0];
    }
    st--;
    for (int a = 0; a < n; a++)
    {
        if (v[a] > st)
        {
            st = v[a];
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}