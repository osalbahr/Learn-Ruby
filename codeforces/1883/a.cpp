// Note: partial solution

#include <iostream>

using namespace std;

void solve()
{
    int total = 0;

    string digits = "1234567890";

    string s;
    cin >> s;
    
    int cursor = 0;
    for (char ch : s) {
        if (digits[cursor] == ch) {
            total++;
            continue;
        }

        if (ch == '0' || ch > digits[cursor]) {
            while (digits[cursor] != ch) {
                cursor++;
                total++;
            }
            total++;
            continue;
        }

        while (digits[cursor] != ch) {
            cursor--;
            total++;
        }
        total++;
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
