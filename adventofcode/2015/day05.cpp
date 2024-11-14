#include <iostream>
#include <set>

using namespace std;

// at least three vowels
bool isThreeVowels(const string& str)
{
    int vowelCount = 0;

    set<char> vowels;
    vowels.insert('a');
    vowels.insert('e');
    vowels.insert('i');
    vowels.insert('o');
    vowels.insert('u');

    for (char ch : str) {
        if (vowels.count(ch)) {
            vowelCount++;
        }
    }

    if (vowelCount < 3) {
        return false;
    }

    return true;
}

// at least one letter appears twice in a row
bool isDoubleLetter(const string& str)
{
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == str[i + 1]) {
            return true;
        }
    }

    return false;
}

// does not contain the strings ab, cd, pq, or xy
bool isNoForbidden(const string& str)
{
    for (int i = 0; i < str.size() - 1; i++) {
        string other = str.substr(i, 2);

        if (other == "ab" || other == "cd" || other == "pq" || other == "xy") {
            return false;
        }
    }

    return true;
}

bool isNice(const string& str)
{
    return isThreeVowels(str) && isDoubleLetter(str) && isNoForbidden(str);
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
