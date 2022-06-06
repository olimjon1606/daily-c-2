#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<double> myVector;
    double sum = 0.00;
    double n = 1.00;
    double max, min;
    cout << "PLease enter natural numbers to sum and '0' to cut the program! \n";
    for (int i = 0; n != 0; ++i)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        myVector.push_back(n);
        sum += n;
    }

    max = myVector[0];
    for (int i = 0; i < myVector.size(); ++i)
    {

        if (myVector[i] > max)
        {
            max = myVector[i];
        }
    }
    min = myVector[0];
    for (int i = 0; i < myVector.size(); ++i)
    {

        if (myVector[i] < min)
        {
            min = myVector[i];
        }
    }

    cout << "\n The list of the Vector: \n";
    for (int i = 0; i < myVector.size(); ++i)
    {
        cout << myVector[i] << "\t";
    }
    cout << "\n The Max is " << max;
    cout << "\n The Min is " << min;
    cout << "\n The Average is " << sum / myVector.size();
    return 0;
}