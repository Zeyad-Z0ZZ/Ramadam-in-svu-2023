// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/438351/problem/D

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1))
        cout << "NO";
    else
        cout << "YES";
    return 0;
}