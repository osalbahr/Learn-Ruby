#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s, s2;
    cin >> s;
    
    if (n == 2) {
        cin >> s2;
    }
    
    if (n == 1 || s == s2) {
        cout << s << endl;
    } else {
        cout << "blandad best" << endl;
    }
}
