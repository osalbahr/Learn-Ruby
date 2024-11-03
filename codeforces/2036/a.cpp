#include <iostream>
#include <vector>

using namespace std;

string solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (size_t i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    for (size_t i = 0; i < v.size() - 1; i++) {
        int diff = v[i] - v[i + 1];
        if (diff < 0) diff = -1 * diff;
        
        if (diff != 5 && diff != 7) {
            return "NO";
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
