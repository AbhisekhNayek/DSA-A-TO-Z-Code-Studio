vector<int> reverseArray(int n, vector<int> &nums)
{
    if(n == 0)
        return{};
    else
    {
        vector<int> vect = reverseArray(n - 1, nums);
        vect.push_back(nums[nums.size() - n ]);
        return vect;
    }
}
