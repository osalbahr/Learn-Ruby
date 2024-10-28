#include <iostream>

using namespace std;

void solve()
{
    int r;
    cin >> r;
    
    int div = 0;
    if (r <= 1399) {
        div = 4;
    } else if (r <= 1599) {
        div = 3;
    } else if (r <= 1899) {
        div = 2;
    } else {
        div = 1;
    }

    cout << "Division " << div << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
