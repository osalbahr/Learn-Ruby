#include <iostream>

#define REPORT(X) cout << #X << " = " << (X) << endl

using namespace std;

int main()
{
    int c = 0;
    int r = 0;

    cin >> c >> r;

    double count = 0;
    for (int i = 0; i < r; i++) {
        string s;
        cin >> s;
        for (char ch : s) {
            if (ch == '.')
                count++;
        }
    }

    cout << count / (r*c) << endl;
}
