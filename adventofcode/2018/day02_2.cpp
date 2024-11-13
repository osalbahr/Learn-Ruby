#include <iostream>

using namespace std;

#define REPORT(X) cout << #X << " = " << (X) << endl

int main()
{
    vector<string> v;

    string line;
    while (getline(cin, line)) {
        v.push_back(line);
    }

    for (string str1 : v) {
        for (string str2 : v) {
            int diffCount = 0;

            for (size_t i = 0; i < str1.size(); i++) {
                if (str1[i] != str2[i]) diffCount++;
            }

            if (diffCount == 1) {
                REPORT(str1);
                REPORT(str2);

                return 0;
            }
        }
    }
}
