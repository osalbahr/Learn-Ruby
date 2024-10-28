#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int count = 0;
    vector<int> v;
    while (n > 0) {
        v.push_back(n % 10);
        if (n % 10) count++;
        n /= 10;
    }

    cout << count << endl;
    
    bool printSpace = false;
    int by10 = 1;
    for (int i = 0; i < v.size(); i++) {
        if (v[i]) {
            if (printSpace) {
                cout << " ";
            }
            cout << v[i] * by10;
            printSpace = true;
        }

        by10 *= 10;

        n /= 10;
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
