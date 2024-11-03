#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int total = 0;
    for (size_t i = 0; i < s.size(); i++) {
        int nextIdx = (i + s.size() / 2) % s.size();
        if (s[i] == s[nextIdx]) {
            total += s[i] - '0';
        }
    }

    cout << total << endl;
}
