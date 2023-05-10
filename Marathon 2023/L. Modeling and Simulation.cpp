//problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/L

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
int dy[] = {1, 0, -1, 0, 1, -1, 1, -1};
int dx[] = {0, 1, 0, -1, 1, -1, -1, 1};
int n, d;
vector<vector<int>> grid;
vector<vector<int>> dist;
bool can(int i, int j)
{
    return i >= 0 && j >= 0 && i < n && j < n && grid[i][j] == 0 && dist[i][j] == -1;
}
int main()
{
    fast();
    cin >> n >> d;
    grid = vector<vector<int>>(n, vector<int>(n));
    dist = vector<vector<int>>(n, vector<int>(n, -1));
    for(auto &i :grid)
    for(auto &j : i)
        cin >> j;
    queue<pair<int, int>> q;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                q.push({i, j});
                dist[i][j] = 0;
                ans++;
            }
        }
    }
    while (!q.empty())
    {
        int x = q.front().first, y = q.front().second;
        int dc = dist[x][y];
        q.pop();
        if (dc == d)
            continue;
        for (int i = 0; i < 4; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if (can(xx, yy))
            {
                q.push({xx, yy});
                dist[xx][yy] = dist[x][y] + 1;
                ans++;
            }
        }
    }
    cout << n * n - ans;
    return 0;
}
