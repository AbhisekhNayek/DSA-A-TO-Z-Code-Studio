int removeDuplicates(vector<int> &arr, int n) {

    // Write your code here.

    int c = 0;

    for(int i = 0;i<n;i++){

        if(arr[i]!=arr[i+1]){

             c++;

        }

    }return c;

}
	
