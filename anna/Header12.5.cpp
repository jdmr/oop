// Anna Denison
#include <iostream>
#include <string>
#include <fstream>
#include <limits>
using namespace std;

class Time
{
private:
  int hours;
  int minutes;
  int seconds;

public:
  Time() : hours(0), minutes(0), seconds(0) {}

  void get_time()
  {
    cout << "Enter hours: ";
    cin >> hours;

    while (hours < 0 || hours > 23)
    {
      cout << "Please Enter, hours must be between 0 and 23." << endl;
      cin >> hours;
      cin >> minutes;
      if (cin.good())
      {
        cin.ignore(10, '\n');
        break;
      }
      cin.clear();
      cout << "INCORRECT INPUT" << endl;
      cin.ignore(10, '\n');
    }

    cout << "Enter minutes: ";
    cin >> minutes;

    while (minutes < 0 || minutes > 59)
    {
      cout << "Please Enter, minutes must be between 0 and 59." << endl;
      cin >> minutes;
      if (cin.good())
      {
        cin.ignore(10, '\n');
        break;
      }
      cin.clear();
      cout << "INCORRECT INPUT" << endl;
      cin.ignore(10, '\n');
    }

    cout << "Enter seconds : ";
    cin >> seconds;

    while (seconds < 0 || seconds > 59)
    {
      cout << "Please Enter, seconds must be between 0 and 59." << endl;
      cin >> seconds;
      cin >> minutes;
      if (cin.good())
      {
        cin.ignore(10, '\n');
        break;
      }
      cin.clear();
      cout << "INCORRECT INPUT" << endl;
      cin.ignore(10, '\n');
    }
  }

  // Note to self: const means = no touchy
  void put_time() const
  {
    cout << "Time = ";
    cout << hours << ":";
    if (minutes < 10)
      cout << "0";
    cout << minutes << ":";
    if (seconds < 10)
      cout << "0";
    cout << seconds << endl;
  }
};

int main()
{
  char choice;
  do
  {
    Time t;
    t.get_time();
    t.put_time();

    cout << "Would you like to do again? (Y/N)? ";
    cin >> choice;
  } while (toupper(choice) == 'Y');

  return 0;
}
