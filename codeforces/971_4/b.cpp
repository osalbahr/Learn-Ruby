#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (size_t j = 0; j < s.size(); j++) {
            if (s[j] == '#') {
                nums.push_back(j + 1);
            }
        }
    }

    for (int i = nums.size() - 1; i >= 0; i--) {
        cout << nums[i];
        if (i != 0) {
            cout << " ";
        }
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
