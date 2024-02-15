#include <bits/stdc++.h>

using namespace std;

bool isPrime(int N)
{
  if (N <= 1)
  {
    return false;
  }
  else
  {
    for (int i = 2; i < sqrt(N); i++)
    {
      if (N % i == 0)
      {
        return false;
      }
    }
    return true;
  }
}
int main()
{

  int n;
  cout << "ENTER A NUMBER : ";
  cin >> n;

  bool ans = isPrime(n);
  if (n != 1 && ans == true)
  {
    cout << "Prime Number";
  }
  else
  {
    cout << "Non Prime Number";
  }
  return 0;
}
