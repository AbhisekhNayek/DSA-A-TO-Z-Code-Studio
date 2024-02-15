#include <bits/stdc++.h>
using namespace std;

int is_Armstrong(int n)
{
    int num = n;
    int sum=0;
    int dig;
    while (n != 0)
    {
        dig = n % 10;
        sum = (dig*dig*dig) +sum;
        n = n / 10;
    }
    if(sum==num)
    {
        cout << "The Number " << num << " is Armstrong Number";
    }
    else{
        cout << "The Number " << num << " is Not Armstrong Number";
    }
}

int main()
{
    int n;
    cout << "ENTER A NUMBER : ";
    cin >> n;
    is_Armstrong(n);
    return 0;
}
