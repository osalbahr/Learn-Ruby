#include <iostream>

using namespace std;

char solve()
{
    string s;
    cin >> s;

    int ac = 0, bc = 0;

    for (char ch : s) {
        if (ch == 'A') ac++;
        if (ch == 'B') bc++;
    }

    if (ac > bc) {
        return 'A';
    } else if (bc > ac) {
        return 'B';
    }

    exit(1);
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
