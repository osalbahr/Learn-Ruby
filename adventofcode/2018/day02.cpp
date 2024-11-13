#include <iostream>

using namespace std;

#define REPORT(X) cout << #X << " = " << (X) << endl

int main()
{
    int twoCount = 0, threeCount = 0;

    string line;
    while (getline(cin, line)) {
        bool isTwo = false, isThree = false;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int count = 0;
            for (char other : line) {
                if (other == ch) count++;
            }

            if (count == 2) isTwo = true;
            if (count == 3) isThree = true;
        }

        if (isTwo) twoCount++;
        if (isThree) threeCount++;
    }

    cout << twoCount * threeCount << endl;
}
