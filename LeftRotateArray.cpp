#include <bits/stdc++.h> 

vector<int> rotateArray(vector<int>& arr, int n) 
{
    int i=0;

    for (int j=1;j<n;j++)
    {
        swap(arr[i],arr[j]);
        i++;
    }
    return arr;
}
