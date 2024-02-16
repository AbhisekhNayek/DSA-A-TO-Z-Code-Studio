long long factorial(long long i) {

    if (i == 0 || i == 1) {

        return 1;

    } else {

        return i * factorial(i - 1);

    }

}

 

vector<long long> factorialNumbers(long long n) {

    vector<long long> result;

 

    for (int j = 1; factorial(j) <= n; j++) {

        result.push_back(factorial(j));

    }

 

    return result;

}
