#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    string surname;
    string email;
    int tel;
    double grade;

    void output_mth()
    {
        cout
            << "\nStudent name: " << name
            << "\nStudent surname: " << surname
            << "\nStudent email: " << email
            << "\nStudent phone number: " << tel
            << "\nStudent grade: " << grade << endl;
    }
};
int main()
{
    student first;
    cout << "Please enter  your name: ";
    cin >> first.name;
    cout << "Please enter your surname: ";
    cin >> first.surname;
    cout << "PLease enter your email here: ";
    cin >> first.email;
    cout << "Please enter your hpone number: ";
    cin >> first.tel;
    cout << "What's your grade: ";
    cin >> first.grade;

    first.output_mth();
}
