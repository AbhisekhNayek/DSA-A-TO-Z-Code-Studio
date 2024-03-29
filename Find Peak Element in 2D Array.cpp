vector<int> findPeakGrid(vector<vector<int>> &g){

    int n = g.size(), m = g[0].size();
    int i = 0, j = 0;

    while (i < n && j < m){
        vector<int> neighbors(4, -1);

        if (i + 1 < n){
            neighbors[2] = g[i + 1][j];
        }

        if (i - 1 >= 0){
            neighbors[0] = g[i - 1][j];
        }

        if (j + 1 < m){
            neighbors[1] = g[i][j + 1];
        }

        if (j - 1 >= 0){

            neighbors[3] = g[i][j - 1];
        }

        // finding the maximum neighbor

        auto maxIndex = max_element(neighbors.begin(), neighbors.end());
        int index = maxIndex - neighbors.begin();
        int maxi = *max_element(neighbors.begin(), neighbors.end());

        // checking if the max neighbor is smaller than the current value

        if (maxi < g[i][j]){

            return {i, j};
        }

        // going in the direction of the max neighbor

        if (index == 0){

            i = i - 1;
        }
        else if (index == 2){

            i = i + 1;
        }

        else if (index == 1){

            j = j + 1;
        }

        else{

            j = j - 1;
        }
    }
}
