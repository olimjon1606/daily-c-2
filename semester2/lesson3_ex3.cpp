#include <iostream>
#include <string>
using namespace std;

struct Matrix
{
    Matrix(int n, int m)
    {
        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                cout << j << "\t";
            }
            cout << endl;
        }
    }
    Matrix(int n)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                cout << j * j << "\t";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n, m;
    cout << "Please enter the size of the Matrix! \n";
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    Matrix first(n, m);
    cout << endl;
    Matrix second(n);
    return 0;
}