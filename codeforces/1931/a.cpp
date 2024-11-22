#include <iostream>

using namespace std;

int val(char ch)
{
    return ch - 'a' + 1;
}

void solve()
{
    int n;
    cin >> n;

    char ch1 = 'a', ch2 = 'a', ch3 = 'a';
    while (val(ch1) + val(ch2) + val(ch3) < n) {
        if (ch3 < 'z') {
            ch3++;
            continue;
        }

        if (ch2 < 'z') {
            ch2++;
            continue;
        }

        if (ch1 < 'z') {
            ch1++;
            continue;
        }

        exit(1);
    }

    cout << ch1 << ch2 << ch3 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
