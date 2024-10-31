// Note: WA

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    int total = 0;

    int n;
    while (cin >> n) {
        total += n;
        if (s.count(total)) {
            cout << total << endl;
            return 0;
        }
        s.insert(total);
    }
    
    cout << total << endl;
}
