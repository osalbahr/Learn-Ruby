#include <iostream>
#include <map>
#include <sstream>

using namespace std;

map<string,int> registers;

bool cond(string reg, string compare, int amount)
{
    if (compare == ">")
        return registers[reg] > amount;
    
    if (compare == ">=")
        return registers[reg] >= amount;
    
    if (compare == "<")
        return registers[reg] < amount;
    
    if (compare == "<=")
        return registers[reg] <= amount;

    if (compare == "==")
        return registers[reg] == amount;

    if (compare == "!=")
        return registers[reg] != amount;

    exit(1);
}

int main()
{
    string line;
    while (getline(cin, line)) {
        stringstream ss(line);

        string reg;
        ss >> reg;

        string incOrDec;
        ss >> incOrDec;

        int amount;
        ss >> amount;

        string ignoreIf;
        ss >> ignoreIf;

        string reg2;
        ss >> reg2;

        string compare;
        ss >> compare;

        int amount2;
        ss >> amount2;

        if (cond(reg2, compare, amount2)) {
            if (incOrDec == "inc") {
                registers[reg] += amount;
            } else {
                registers[reg] -= amount;
            }
        }
    }

    int biggest = 0;
    for (const auto [k, v] : registers) {
        if (v > biggest)
            biggest = v;
    }

    cout << biggest << endl;
}
