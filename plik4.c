#include <iostream>

using namespace std;

int main()
{
  int * T,n,i;

  cin >> n;
  
  T = new int[n];
  
  for(i = 0; i < n; i++) cin >> T[i];

  cout << endl;

  for(i = 0; i < n; i++) cout << T[i] << " ";

  cout << endl << endl;

  delete [] T;

  return 0;
} 