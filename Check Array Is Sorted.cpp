int isSorted(int n, vector<int> a) {
    int i=0,j=1;
    while(j<n){
        if(a[i]<=a[j]){
            i++,j++;
        }
        else if (a[i]>a[j]){
            return 0;
        }
    }
    return 1;
}
