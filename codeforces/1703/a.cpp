#include <iostream>

using namespace std;

string solve()
{
    string s;
    cin >> s;
    
    if (s.size() != 3)
        return "NO";
    
    if (s[0] != 'Y' && s[0] != 'y')
        return "NO";

    if (s[1] != 'E' && s[1] != 'e')
        return "NO";

    if (s[2] != 'S' && s[2] != 's')
        return "NO";

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
