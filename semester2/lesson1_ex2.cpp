#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Please enter how many elements you want: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Ooops you entered wrong number!";
        return 0;
    }
    string array[n];
    string *arr = new string[n];
    cout << "Please enter your lines:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "\n#." << i + 1 << "\t";
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; --i)
    {
        cout << "#." << i + 1 << "\t" << arr[i] << endl;
    }
    delete[] arr;
    return 0;
}