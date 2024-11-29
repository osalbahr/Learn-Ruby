#include <iostream>
#include <vector>

using namespace std;

string solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> cols(m);

    string line;
    for (int i = 0; i < n; i++) {
        cin >> line;
        for (int j = 0; j < (int)line.size(); j++) {
            cols[j].push_back(line[j]);
        }
    }
    
    string toFind = "vika";
    char pos = 0;

    for (const auto& col : cols) {
        for (char ch : col) {
            if (ch == toFind[pos]) {
                pos++;
                break;
            }
        }

        if (pos == (int)toFind.size()) {
            return "YES";
        }
    }

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
