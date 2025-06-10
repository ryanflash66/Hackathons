#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n, k; std::cin >> n >> k;
        std::vector<long long> a(n);
        for (auto& x : a) std::cin >> x;

        bool sortable;
        if (k == 1) {
            sortable = std::is_sorted(a.begin(), a.end());
        } else {
            sortable = true;           // any k ≥ 2 works
        }
        std::cout << (sortable ? "YES\n" : "NO\n");
    }
}