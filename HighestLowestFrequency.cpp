vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    int n= v.size();
    int maxi = INT_MIN,mini = INT_MAX;
    int maxFirst,minFirst;
    vector<int> ans;
    map<int,int> mp;
    for(auto &it:v)
        mp[it]++;
    
    
   for(auto &it:mp){
        if (it.second > maxi) {
          maxi = it.second;
          maxFirst = it.first;
        }
        if(it.second<mini){
            mini = it.second;
            minFirst = it.first;
        }
   }
    ans.push_back(maxFirst);
    ans.push_back(minFirst);
    return ans;

}
