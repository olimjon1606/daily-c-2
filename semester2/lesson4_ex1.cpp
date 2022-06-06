#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct City
{
    string name;
    double latitude;
    double longitude;

    void Output()
    {
        cout << name << "\t ** \t" << latitude << "\t ** \t" << longitude << endl;
    }
};
int main()
{
    vector<string> CityVector;
    ifstream fin("city.txt");
    string name;
    double latitude;
    double longitude;
    City city;
    int i = 0;
    while (fin >> name >> latitude >> longitude)
    {
        city.name = name;
        city.latitude = latitude;
        city.longitude = longitude;

        CityVector.push_back(city);
    }
    city.Output();
    // int i = 0;
    // while (fin >> name >> latitude >> longitude)
    // {
    //     City city[i];
    // }

    return 0;
}