#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string log;
    cin >> log;

    vector<int> v('Z' - 'A' + 1);
    for (int i = 0; i < v.size(); i++)
        v[i] = i + 1;

    for (char ch : log)
        v[ch - 'A']--;

    int total = 0;
    for (int i = 0; i < v.size(); i++)
        if (v[i] <= 0)
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
