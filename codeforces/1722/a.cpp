#include <iostream>

using namespace std;

string solve()
{
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    if (n != 5) return "NO";

    string check = "Timur";

    for (char ch : check) {
        bool exists = false;
        for (char other : s) {
            if (ch == other) {
                exists = true;
            }
        }
        if (!exists) return "NO";
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
