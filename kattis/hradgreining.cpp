#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (size_t i = 0; i < s.size() - 2; i++) {
        if (s.substr(i, 3) == "COV") {
            cout << "Veikur!" << endl;
            return 0;
        }
    }

    cout << "Ekki veikur!" << endl;
}
