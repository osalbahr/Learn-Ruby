#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int result = 0;
    while (n--) {
        string s;
        cin >> s;

        int minusCount = 0;
        int plusCount = 0;
        for (char ch : s) {
            if (ch == '+') plusCount++;
            if (ch == '-') minusCount++;
        }

        if (minusCount == 2) result--;
        if (plusCount == 2) result++;
    }

    cout << result << endl;
}
