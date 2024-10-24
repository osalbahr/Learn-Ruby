#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int,string> mp;
    while (n--) {
        string str;
        int count;

        cin >> str >> count;

        mp[-1 * count] = str;
    }

    for (auto it : mp) {
        cout << it.second << endl;
        return 0;
    }
}
