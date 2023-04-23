// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/H

#include <bits/stdc++.h>
using namespace std;

int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    long long n;
    cin>>n;
    cout<<(long long)(sqrt((n*8)+1)-1)/2;

    return 0;
}
