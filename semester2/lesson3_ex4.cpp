#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector;
    int sum = 0;
    int n = 1;
    cout << "PLease enter natural numbers to sum and '0' to cut the program! \n";
    for (int i = 0; n != 0; ++i)
    {
        cin >> n;
        myVector.push_back(n);
        sum += n;
    }
    for (int i = 0; i < myVector.size(); ++i)
    {
        cout << myVector[i] << "\t";
    }
    cout << "the sum is " << sum;
    return 0;
}