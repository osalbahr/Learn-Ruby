#include <iostream>

using namespace std;

string solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    string ret1 = s2.substr(0, 1);
    string ret2 = s1.substr(0, 1);

    ret1 += s1[1];
    ret1 += s1[2];

    ret2 += s2[1];
    ret2 += s2[2];

    return ret1 + " " + ret2;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
