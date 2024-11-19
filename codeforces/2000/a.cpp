#include <iostream>

using namespace std;

string solve()
{
    string s;
    cin >> s;

    if (s.size() < 3)
        return "NO";
    
    if (s.substr(0, 2) != "10")
        return "NO";
    
    if (s[2] == '0')
        return "NO";

    int x = 0;
    sscanf(s.c_str() + 2, "%d", &x);

    if (x >= 2)
        return "YES";
    
    return "NO";
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
