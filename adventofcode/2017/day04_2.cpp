#include <iostream>
#include <sstream>
#include <set>

using namespace std;

bool isValid(const string& line)
{
    stringstream ss(line);

    set<string> words;

    string word;
    while (ss >> word) {
        sort(word.begin(), word.end());

        if (words.count(word)) {
            return false;
        }

        words.insert(word);
    }

    return true;
}

int main()
{
    int total = 0;

    string line;
    while (getline(cin, line)) {
        cout << line << endl;

        if (isValid(line)) {
            total++;
        } else {
        }
    }

    cout << total << endl;
}
