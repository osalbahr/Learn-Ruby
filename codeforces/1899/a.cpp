#include <iostream>

using namespace std;

string solve()
{
    int n;
    cin >> n;
    if (n % 3 == 0)
        return "Second";
    
    return "First";
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
