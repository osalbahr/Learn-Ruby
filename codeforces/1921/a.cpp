#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    vector< pair<int,int> > v;

    int x, y;
    for (int i = 0; i < 4; i++) {
        cin >> x >> y;
        pair<int,int> p = make_pair(x, y);
        v.push_back(p);
    }

    sort(v.begin(), v.end());

    int dx = v[3].first - v[0].first;
    int dy = v[3].second - v[0].second;

    cout << dx * dy << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
