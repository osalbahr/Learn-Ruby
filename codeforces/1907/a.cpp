#include <iostream>

using namespace std;

void solve()
{
    string pos;
    cin >> pos;

    for (char num = '1'; num <= '8'; num++) {
        if (num == pos[1])
            continue;
        
        cout << pos[0] << num << endl;
    }

    for (char col = 'a'; col <= 'h'; col++) {
        if (col == pos[0])
            continue;
        
        cout << col << pos[1] << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
