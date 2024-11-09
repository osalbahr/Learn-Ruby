#include <iostream>
#include <sstream>

using namespace std;

bool isValid(const string& str, char ch, int low, int high)
{
    int total = 0;

    if (str[low - 1] == ch)
        total++;
    
    if (str[high - 1] == ch)
        total++;

    if (total == 1) {
        return true;
    }

    return false;
}

int main()
{
    int total = 0;

    string line;
    while (getline(cin, line)) {
        stringstream ss(line);

        // Example:
        // 1-3 a: abcde
        int low, high;
        char dash;
        ss >> low >> dash >> high;

        char ch;
        ss >> ch;

        char colon;
        ss >> colon;

        string s;
        ss >> s;

        total += isValid(s, ch, low, high);

        // cout << low << dash << high << " " << ch << colon << " " << s << endl;
    }

    cout << total << endl;
}