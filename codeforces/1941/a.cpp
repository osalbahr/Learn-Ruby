#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];

    vector<int> v2(m);
    for (int i = 0; i < m; i++)
        cin >> v2[i];

    int total = 0;
    for (int a : v1)
        for (int b : v2)
            if (a + b <= k)
                total++;

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
