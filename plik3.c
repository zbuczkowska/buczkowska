#include <iostream>

using namespace std;

int main()
{
  int x,p1,p2;

  cin >> x;
  if(x <= 1) p2 = x;
  else
  {
    p1 = 0; p2 = x >> 1;
    while(abs(p1 - p2) > 1)
    {
      p1 = p2;
      p2 = (p2 + x / p2) >> 1;
    }
    while(p2 * p2 > x) --p2;
  }
  cout << p2 << endl
       << (p2 * p2) << endl
       << endl;
  return 0;
} 