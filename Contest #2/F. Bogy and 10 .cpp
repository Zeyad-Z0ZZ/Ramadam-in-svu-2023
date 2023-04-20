// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/435891/problem/F

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;
int main()
{
  fast int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (n % 10 == 5)
    {
      cout << "1" << endl;
    }
    else if (n % 10 == 0)
    {
      cout << "0" << endl;
    }
    else
    {
      cout << "-1" << endl;
    }
  }
}
