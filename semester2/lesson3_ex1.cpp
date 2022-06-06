#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    vector<float> squares;
    for (int i = 2; i <= 10; ++i)
    {
        for (int j = 0; j <= 10; ++j)
        {
            squares.push_back(i * j);
        }
    }

    for (int i = 0; i < squares.size(); ++i)
    {
        cout << squares[i] << "\t";
    }
}