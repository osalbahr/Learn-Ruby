#include <iostream>
#include <map>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    string problems;
    cin >> problems;

    map<int,int> mp;
    for (char ch : problems) {
        mp[ch]++;
    }

    int total = 0;
    for (char ch = 'A'; ch <= 'G'; ch++) {
        if (mp[ch] >= m)
            continue;
        
        total += m - mp[ch];
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
