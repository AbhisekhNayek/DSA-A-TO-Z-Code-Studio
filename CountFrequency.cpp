vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    vector<int> hash(n);

    for(int i=0;i<n;i++)
    { 
        hash[nums[i]-1] += 1;
    }
    return hash;
}
