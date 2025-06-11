#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (size_t i = 0; i < n; ++i)
            cin >> a[i];

        int f_diff, m_diff, l_diff, result;

        f_diff = a[0] - 0;
        l_diff = (x - a[n-1])*2;
        m_diff = 0;
        
        for(size_t i = 0; i < n - 1; ++i){
            m_diff = max(m_diff, abs(a[i + 1] - a[i]));
        }

        result = max({f_diff, l_diff, m_diff});

        cout << result << endl;
    }
    
    return 0;
}