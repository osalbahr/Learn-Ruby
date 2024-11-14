#include <iostream>
#include <set>

using namespace std;

// pair appears twice without overlapping
bool isTwice(const string& str)
{
    for (int i = 0; i < str.size() - 1; i++) {
        for (int j = i + 2; j < str.size() - 1; j++) {
            string str1 = str.substr(i, 2);
            string str2 = str.substr(j, 2);
            if (str1 == str2) return true;
        }
    }

    return false;
}

// one letter repeats with exactly one letter between them
bool isRepeats(const string& str)
{
    for (int i = 0; i < str.size() - 2; i++) {
        if (str[i] == str[i + 2]) {
            return true;
        }
    }

    return false;
}

bool isNice(const string& str)
{
    return isTwice(str) && isRepeats(str);
}

int main()
{
    int total = 0;

    string str;
    while (cin >> str) {
        cout << str;
        if (isNice(str)) {
            total++;
            cout << " (nice)" << endl;
        } else {
            cout << " (naughty)" << endl;
        }
    }

    cout << total << endl;
}
