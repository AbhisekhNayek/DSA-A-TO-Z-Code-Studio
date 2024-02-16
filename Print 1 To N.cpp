void printNumber(int i,int x,vector<int> &ans)
{
    if(i>x) 
    return;
    ans.push_back(i);
    printNumber(i+1,x,ans);
}
vector<int> printNos(int x) 
{
    vector<int> ans;
    printNumber(1, x,ans);
    return ans;
}
