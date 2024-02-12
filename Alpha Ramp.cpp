#include <bits/stdc++.h>
using namespace std;

void PrintPattern(int n)
{
    for(int i=0;i<n;i++)
    {
        char ch='A'+i;
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int num,t;
    cout<<" Enter The Last Range : ";
    cin>>num;
    cin>>t;
    for(int i=0;i<num;i++)
    {
        PrintPattern(t);
    }
    return 0;
}
