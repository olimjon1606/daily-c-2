#include <iostream>
#include <string>
using namespace std;
int main()
{
    string arr[1];
    cout << "Please enter a line! \n";
    string line;
    cin >> line;
    string read = "";
    while (read != "end")
    {
        line = read + "\n" + line;
        cin >> read;
    }
    cout << line;
}
