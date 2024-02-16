void  printdecreseNo(int x,  vector<int> &arr){

    if(x<=0) return;
    arr.push_back(x);
    printdecreseNo(x-1,arr);

}

vector<int> printNos(int x) {

    vector<int>arr;
    printdecreseNo(x,arr);
    return arr;

}
