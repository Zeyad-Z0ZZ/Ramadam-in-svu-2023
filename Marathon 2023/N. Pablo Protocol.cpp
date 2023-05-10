// problem link ->https://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/N

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n , a , b;
    cin >> n >> a >> b ;
    cout << n/a + n/b - n/lcm(a,b);
    return 0;
}
