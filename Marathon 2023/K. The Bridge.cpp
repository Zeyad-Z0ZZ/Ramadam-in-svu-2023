// problem link ->https://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/K

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
fast

ll n;cin>>n;

 vector<ll>v(n);
 for(int i=0;i<n;i++)
    cin>>v[i];
 ll x=*max_element(v.begin(),v.end());
 ll c=0;
 for(int i=0;i<n;i++)
 {
     c+=(x-v[i]);
 }

 cout<<c;




}
