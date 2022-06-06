#include <iostream>
#include <string>

using namespace std;

struct Point
{
    int a;
    int b;

    Point(int a, int b)
    {
        a = a;
        b = b;
    }
    Point()
    {
        a:0;
        b:0;
    }
};
int main()
{
    Point x(10, 20);
}