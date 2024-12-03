#include <iostream>

using namespace std;

bool isEnabled = true;

int getMuls(const string& line)
{
    int total = 0;

    for (int i = 0; i < line.size() - 4; i++) {
        if (line.substr(i, 4) == "do()") {
            isEnabled = true;
        }

        if (i < line.size() - 7 && line.substr(i, 7) == "don't()") {
            isEnabled = false;
        }

        if (line.substr(i, 4) == "mul(") {
            int a, b;
            
            if (sscanf(line.c_str() + i, "mul(%d,%d)", &a, &b) == 2) {        
                
                // edge case
                char ch;
                sscanf(line.c_str() + i, "mul(%d,%d%c", &a, &b, &ch);
                if (ch != ')')
                    continue;

                if (isEnabled)
                    total += a * b;
            }
        }
    }

    return total;
}

int main()
{
    int total = 0;

    string line;
    while (getline(cin, line)) {
        total += getMuls(line);
    }

    cout << total << endl;
}
