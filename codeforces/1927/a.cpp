#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int start = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'B') {
            start = i;
            break;
        }
    }

    int end = s.size() - 1;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == 'B') {
            end = i;
            break;
        }
    }

    cout << end - start + 1 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
