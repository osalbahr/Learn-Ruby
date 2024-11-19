// Note: TLE on test 4

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> solve()
{
    int k;
    cin >> k;
    
    vector<int> v(k);
    for (int i = 0; i < k; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] * v[j] == v.size() - 2) {
                return make_pair(v[i], v[j]);
            }
            if (v[i] * v[j] > v.size() - 2) {
                break;
            }
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
