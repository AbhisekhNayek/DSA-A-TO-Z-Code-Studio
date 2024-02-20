#include <climits> // For INT_MAX
vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector<int> l;
    int max = 0;
    int max2 = 0;
    int min = INT_MAX;
    int min2 = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max2 = max;
            max = a[i];
        }
        else if(a[i]>max2 && a[i]!=max){
            max2 = a[i];
        }
        if(a[i]<min){
            min2 = min;
            min = a[i];
        }
        else if(a[i]<min2 && a[i]!=min){
            min2 = a[i];
        }
    }
    // cout << max2 << " " << min2;
    l.push_back(max2);
    l.push_back(min2);
    return l;
}
