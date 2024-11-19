#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());

    int total = 0;
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] == v[i + 1]) {
            total++;
            i++;
        }
    }

    cout << total << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
