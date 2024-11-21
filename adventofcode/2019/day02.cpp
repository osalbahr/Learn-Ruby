#include <iostream>

using namespace std;

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
    opcodes[1] = 12;
    opcodes[2] = 2;

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

    cout << opcodes[0] << endl;
}
