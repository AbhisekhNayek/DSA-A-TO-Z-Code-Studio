void reverse(vector<int> &arr, int s, int e){

    while(s<e){

        swap(arr[s++],arr[e--]);

    }

}


vector<int> rotateArray(vector<int>arr, int k) {

    // Write your code here.

    int l = arr.size();

    reverse(arr, 0, k-1);

    reverse(arr, k, l-1);

    reverse(arr, 0, l-1);

 

    return arr;

}
