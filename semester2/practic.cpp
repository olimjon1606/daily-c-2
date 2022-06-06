#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
public:
    string Name;
    string OwnerName;
    int Subscribers;
    list<string> PublishedVideoTitles;

    YouTubeChannel(string name, string ownerName, int subscribers)
    {
        Name = name;
        OwnerName = ownerName;
        Subscribers = 0;
    }
    void output()
    {
        cout << "Name: " << Name << endl;
        cout << "Owner Name: " << OwnerName << endl;
        cout << "Subscribers: " << Subscribers << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }
};
int main()
{
    YouTubeChannel firstChannel("Ethical Hackers", "Olimjon", 1000000);
    firstChannel.PublishedVideoTitles.push_back("Hacking in 5 seconds");
    firstChannel.PublishedVideoTitles.push_back("Hacking in 5 seconds");
    firstChannel.PublishedVideoTitles.push_back("Hacking in 5 seconds");

    YouTubeChannel secondChannel("Daily Vlogs", "Olimjon Orifjonov", 50000);
    secondChannel.PublishedVideoTitles.push_back("5 days in my life!");
    secondChannel.PublishedVideoTitles.push_back("What i did whole week!");

    firstChannel.output();
    secondChannel.output();

    return 0;
}