#include <bits/stdc++.h>
using namespace std;

void PrintPattern(int n)
{
    for(int i=0;i<n;i++)
    {
    // Space 
        for(int j=1;j<=n-i-1;j++)
        {
            cout<<" ";
        }
    //Charcters
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++)
        {
            cout<<ch;
            if(j<=breakpoint)
                ch++;
            else
                ch--;
        }
    //Space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
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
