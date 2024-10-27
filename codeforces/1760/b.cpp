#include <iostream>
#include <vector>
#include <algorithm>

#define REPORT(X) cout << #X << " = " << (X) << endl

using namespace std;

int solve()
{
    vector<int> v;

    int n;
    cin >> n;

    string s;
    cin >> s;

    for (char ch : s) {
        v.push_back(ch);
    }

    sort(v.begin(), v.end());

    return v[ v.size() - 1 ] - 'a' + 1;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
