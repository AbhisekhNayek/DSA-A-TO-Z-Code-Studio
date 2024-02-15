#include <bits/stdc++.h>
using namespace std;

int reverse_digits(int n)
{
    int rev = 0;
    int dig;
    while (n != 0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n = n / 10;
    }
    return rev;
}

int main()
{
    int n = 12345;
    cout << "Reverse Number " << n << " is " << reverse_digits(n);
    return 0;
}
