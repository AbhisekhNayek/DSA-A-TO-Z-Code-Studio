#include<bits/stdc++.h>

vector < int > sortedArray(vector < int > a, vector < int > b) {

    // Write your code here

    set<int> uniSet;

 

    for(int i = 0 ; i < a.size() ; i++){

        uniSet.insert(a[i]);

    }

 

    for(int i = 0 ; i < b.size() ; i++){

        uniSet.insert(b[i]);

    }

    vector<int> result ;

    for(auto it = uniSet.begin() ; it != uniSet.end() ; it++){

        result.push_back(*it);

    }

 

    return result;

}
