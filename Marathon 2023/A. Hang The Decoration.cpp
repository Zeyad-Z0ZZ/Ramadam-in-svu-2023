// problem link -> https://codeforces.com/group/QI9pPpkbDH/contest/434691/problem/A

#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  cout << min(c / b, a);
  return 0;
}