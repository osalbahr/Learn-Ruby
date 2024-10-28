#include <iostream>
#include <vector>

using namespace std;

string solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] == v[j]) return "NO";
        }
    }

    return "YES";
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
