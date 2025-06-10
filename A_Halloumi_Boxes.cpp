#include <bits/stdc++.h>    // This pulls every standard library header at once. It is a competitive programming shortcut to use instead of adding libraries one by one

using namespace std;

int main() {
    int t;
    cin >> t;   // Step 1: Get number of test cases (standard in competitive programming. Handled by judge)

    while (t--) {
        long long n, k;
        cin >> n >> k;  // read array length (n) and max-reverse length (k)

        vector<long long> a(n); // create a new vector (dynamic array) and set the type to long long, with variable name "a", and set the size to n (array length)
        for (size_t i = 0; i < n; ++i)
            cin >> a[i];    // read the array elements on by one. This will happen for each of the test cases (t)

        vector<long long> copy_a = a;   // create a new vector copy of a. It will be used to check if a is already sorted
        sort(copy_a.begin(), copy_a.end()); // sort the copy in increasing order. It uses <algorithm>'s std::sort, which is O(nlogn)
        
        if(copy_a == a || k > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}