// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/G

#include<bits/stdc++.h>
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define fast std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void files()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
vector<int>v;
int n;
void dfs(int node)
{
    if((node+1)*2-1<n)
        dfs((node+1)*2-1);
    cout<<v[node]<<' ';
    if((node+1)*2<n)
        dfs((node+1)*2);

}
int main()
{
    fast
    files();
    cin>>n;
    v.resize(n);
    for(auto &it:v)
        cin>>it;
    dfs(0);

    return 0;
}
