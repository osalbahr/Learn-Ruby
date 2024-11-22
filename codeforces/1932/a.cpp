#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string path;
    cin >> path;

    int coins = 0;
    int thorns = 0;
    for (int i = 0; i < path.size(); i++) {
        char ch = path[i];

        if (ch == '.') {
            thorns = 0;
            continue;
        }
        
        if (ch == '@') {
            thorns = 0;
            coins++;
            continue;
        }

        // thorn
        thorns++;
        if (thorns == 2)
            break;
    }

    cout << coins << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
