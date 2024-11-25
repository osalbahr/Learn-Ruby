#include <iostream>
#include <vector>
#include <set>

using namespace std;

void printBanks(const vector<int>& banks)
{
    for (int bank : banks)
        cout << bank << " ";
    
    cout << endl;
}

vector<int> distribute(const vector<int>& banks)
{
    vector<int> newBanks = banks;

    int pos = 0;
    int biggest = newBanks[pos];
    for (int i = 0; i < newBanks.size(); i++) {
        if (newBanks[i] > biggest) {
            pos = i;
            biggest = newBanks[pos];
        }
    }

    newBanks[pos] = 0;
    pos = (pos + 1) % newBanks.size();
    while (biggest) {
        newBanks[pos]++;
        pos = (pos + 1) % newBanks.size();
        biggest--;
    }

    return newBanks;
}

int main()
{
    vector<int> banks;
    int bank;
    while (cin >> bank)
        banks.push_back(bank);
    
    set<vector<int>> seen;
    seen.insert(banks);

    int steps = 0;
    while (true) {
        banks = distribute(banks);
        steps++;

        if (seen.count(banks)) {
            break;
        }
        seen.insert(banks);
    }

    cout << steps << endl;
}
