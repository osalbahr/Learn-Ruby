#include <iostream>
#include <sstream>

using namespace std;

int getDiff(const string& line)
{
    stringstream ss(line);

    vector<int> v;
    int num;
    while (ss >> num)
        v.push_back(num);
    
    sort(v.begin(), v.end());

    return v.back() - v.front();
}

int main()
{
    int total = 0;

    string line;
    while (getline(cin, line)) {
        int diff = getDiff(line);
        total += diff;
    }

    cout << total << endl;
}
