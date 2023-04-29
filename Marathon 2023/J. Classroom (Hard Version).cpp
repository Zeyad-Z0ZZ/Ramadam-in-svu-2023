// problem link ->https://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/J

#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}
int main()
{
    /*-->{((*/ fast(); /*))}<--*/
    int n,m; cin>>n>>m;
    std::vector<string> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<vector<vector<int>>>a(n+2,vector<vector<int>>(m+2,vector<int>(26,0)));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int c=v[i][j]-'a';
            a[i+1][j+1][c]++;
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            for(int c=0;c<26;c++)
            {
                a[i][j][c] += a[i][j-1][c] + a[i-1][j][c] - a[i-1][j-1][c];
            }
        }
    }
    int q; cin>>q;
    while(q--)
    {
        int aa,b,c,d;cin>>aa>>b>>c>>d;
        for(int i=0;i<26;i++)
        {
            char cc=(char)(i+'a');
            int x=a[c][d][i]-a[c][b-1][i]-a[aa-1][d][i]+a[aa-1][b-1][i];
            if(x)
            {
                cout<<cc<<" "<<x<<"\n";
            }
        }
        cout<<"\n";
    }

return 0;
}




