#include <bits/stdc++.h>
using namespace std;

bool is_Palindrome(int n)
{
    int num = n;
    int rev = 0;
    int dig;
    while (n != 0)
    {
        dig = n % 10;
        rev = rev * 10 + dig;
        n = n / 10;
    }
    if (num == rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "ENTER A NUMBER : ";
    cin >> n;

    if (is_Palindrome(n))
    {
        cout << "The Number " << n << " is Palindrome";
    }
    else
    {
        cout << "The Number " << n << " is Not Palindrome";
    }
    return 0;
}
