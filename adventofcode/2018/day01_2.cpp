#include <iostream>
#include <set>

using namespace std;

#define REPORT(X) cout << #X << " = " << (X) << endl

int main()
{
    set<int> s;

    int total = 0;

    vector<int> v;
    int n;
    while (cin >> n) {
        v.push_back(n);
    }

    while (1) {
        for (int n : v) {
            if (s.count(total)) {
                cout << total << endl;
                return 0;
            }
            s.insert(total);

            total += n;
            REPORT(total);
        }
    }
}
