#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> reversed;
    string line;
    while (line != "end")
    {
        reversed.insert(reversed.begin(), line);
        getline(cin, line);
    }
    for (int i = 0; i < reversed.size(); ++i)
    {
        cout << reversed[i] << endl;
    }
    return 0;
}