// Note: answer is too low, works on sample input

#include <iostream>
#include <vector>

using namespace std;

int getXMAS(const vector<string>& input)
{
    int total = 0;

    for (int i = 0; i < input.size() - 2; i++) {
        for (int j = 0; j < input[i].size() - 2; j++) {
            if (input[i + 1][j + 1] != 'A')
                continue;
            
            // ..S
            // .A.
            // M..
            bool posMas = false;
            if (input[i + 2][j] == 'M' && input[i][j + 2] == 'S')
                posMas = true;
            if (input[i + 2][j] == 'S' && input[i][j + 2] == 'M')
                posMas = true;

            // M..
            // .A.
            // ..S
            bool negMas = false;
            if (input[i][j] == 'M' && input[i + 2][j + 2] == 'S')
                negMas = true;
            if (input[i][j] == 'S' && input[i + 2][j + 2] == 'M')
                negMas = true;
            
            total += posMas && negMas;
        }
    }

    return total;
}

int main()
{
    vector<string> input;

    string line;
    while (getline(cin, line)) {
        input.push_back(line);
    }

    cout << getXMAS(input) << endl;
}
