#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    int total = 0;
    while (n--) {
        int a;
        cin >> a;
        total += abs(a);
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
