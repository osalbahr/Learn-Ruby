#include <iostream>

using namespace std;

#define REPORT(X) cout << #X << " = " << (X) << endl

vector<int> getOpcodes()
{
    vector<int> opcodes;

    int opcode;
    char comma;
    while (cin >> opcode) {
        opcodes.push_back(opcode);
        cin >> comma;
    }

    return opcodes;
}

int main()
{
    vector<int> opcodes = getOpcodes();

    for (int i = 0; i <= 99; i++) {
        for (int j = 0; j <= 99; j++) {
            vector<int> stash = opcodes;

            opcodes[1] = i;
            opcodes[2] = j;

            for (int pos = 0; opcodes[pos] != 99; pos += 4) {
                int opcode = opcodes[pos];

                int n = opcodes[pos + 1];
                int m = opcodes[pos + 2];
                int output = opcodes[pos + 3];

                if (opcode == 1) {
                    opcodes[output] = opcodes[n] + opcodes[m];
                } else if (opcode == 2) {
                    opcodes[output] = opcodes[n] * opcodes[m];
                } else {
                    cerr << "Something went wrong: ";
                    cerr << opcode << endl;
                    exit(1);
                }
            }

            if (opcodes[0] == 19690720) {
                cout << 100 * i + j << endl;
                exit(0);
            }

            opcodes = stash;
        }
    }

    cerr << "Not Found" << endl;
    exit(1);
}
