// Note: answer is too low, works on sample input

#include <iostream>
#include <vector>

using namespace std;

int getHorizontal(const vector<string>& input)
{
    int total = 0;

    for (const string& row : input) {
        for (int i = 0; i < row.size() - 4; i++) {
            if (row.substr(i, 4) == "XMAS") {
                total++;
            }
            if (row.substr(i, 4) == "SAMX") {
                total++;
            }
        }
    }

    return total;
}

int getVertical(const vector<string>& input)
{
    int total = 0;

    for (int i = 0; i < input.size() - 3; i++) {
        for (int j = 0; j < input[i].size(); j++) {
            if (input[i][j] == 'X'
                && input[i + 1][j] == 'M'
                && input[i + 2][j] == 'A'
                && input[i + 3][j] == 'S') {

                total++;
            }

            if (input[i][j] == 'S'
                && input[i + 1][j] == 'A'
                && input[i + 2][j] == 'M'
                && input[i + 3][j] == 'X') {

                total++;
            }
        }
    }
    
    return total;
}

int getDiagPos(const vector<string>& input)
{
    int total = 0;

    for (int i = 3; i < input.size(); i++) {
        for (int j = 0; j < input[i].size() - 3; j++) {
            if (input[i][j] == 'X'
                && input[i - 1][j + 1] == 'M'
                && input[i - 2][j + 2] == 'A'
                && input[i - 3][j + 3] == 'S') {

                total++;
            }

            if (input[i][j] == 'S'
                && input[i - 1][j + 1] == 'A'
                && input[i - 2][j + 2] == 'M'
                && input[i - 3][j + 3] == 'X') {

                total++;
            }
        }
    }

    return total;
}

int getDiagNeg(const vector<string>& input)
{
    int total = 0;

    for (int i = 0; i < input.size() - 3; i++) {
        for (int j = 0; j < input[i].size() - 3; j++) {
            if (input[i][j] == 'X'
                && input[i + 1][j + 1] == 'M'
                && input[i + 2][j + 2] == 'A'
                && input[i + 3][j + 3] == 'S') {

                total++;
            }

            if (input[i][j] == 'S'
                && input[i + 1][j + 1] == 'A'
                && input[i + 2][j + 2] == 'M'
                && input[i + 3][j + 3] == 'X') {

                total++;
            }
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

    int total = 0;
    total += getHorizontal(input);
    total += getVertical(input);
    total += getDiagPos(input);
    total += getDiagNeg(input);

    cout << total << endl;
}
