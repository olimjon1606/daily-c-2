#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> table;
    int n;
    cout << "Please enter natural number: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            table.push_back(i + j);
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cout << i * j << "\t";
        }
        cout << "\n"
             << endl;
    }
    return 0;
}