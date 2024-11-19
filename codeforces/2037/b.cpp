#include <iostream>
#include <vector>
#include <map>

using namespace std;

pair<int, int> solve()
{
    int k;
    cin >> k;
    
    map<int,int> mp;
    for (int i = 0; i < k; i++) {
        int a;
        cin >> a;
        mp[a]++;
    }

    for (auto it : mp) {
        int n = it.first;

        // case of n = m
        if (mp[n] >= 2 && n * n == k - 2) {
            return make_pair(n, n);
        }

        int m = (k - 2) / n;

        if (n * m == k - 2 && mp[m] > 0) {
            return make_pair(n, m);
        }
    }

    exit(1);
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        pair<int, int> p = solve();
        cout << p.first << " " << p.second << endl;
    }
}
