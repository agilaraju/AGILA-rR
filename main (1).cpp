/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

// Base class
class WeatherCondition {
public:
    virtual void displayCondition() = 0;
};

// Derived classes
class Sunny : public WeatherCondition {
public:
    void displayCondition() {
        cout << "It is sunny." << endl;
    }
};

class Rainy : public WeatherCondition {
public:
    void displayCondition() {
        cout << "It is rainy." << endl;
    }
};

class Cloudy : public WeatherCondition {
public:
    void displayCondition() {
        cout << "It is cloudy." << endl;
    }
};

int main() {
    WeatherCondition* today;
    WeatherCondition* tomorrow;
    WeatherCondition* yesterday;

    // Dynamically create objects of derived classes
    Sunny sunnyToday;
    Rainy rainyToday;
    Cloudy cloudyToday;

    Sunny sunnyTomorrow;
    Rainy rainyTomorrow;
    Cloudy cloudyTomorrow;

    Sunny sunnyYesterday;
    Rainy rainyYesterday;
    Cloudy cloudyYesterday;

    // Set the weather conditions for today, tomorrow, and yesterday
    int userInput;
    cout << "Enter the weather condition for today (1: Sunny, 2: Rainy, 3: Cloudy): ";
    cin >> userInput;

    if (userInput == 1) {
        today = &sunnyToday;
    } else if (userInput == 2) {
        today = &rainyToday;
    } else if (userInput == 3) {
        today = &cloudyToday;
    } else {
        cout << "Invalid input. Exiting..." << endl;
        return 0;
    }

    cout << "Enter the weather condition for tomorrow (1: Sunny, 2: Rainy, 3: Cloudy): ";
    cin >> userInput;

    if (userInput == 1) {
        tomorrow = &sunnyTomorrow;
    } else if (userInput == 2) {
        tomorrow = &rainyTomorrow;
    } else if (userInput == 3) {
        tomorrow = &cloudyTomorrow;
    } else {
        cout << "Invalid input. Exiting..." << endl;
        return 0;
    }

    cout << "Enter the weather condition for yesterday (1: Sunny, 2: Rainy, 3: Cloudy): ";
    cin >> userInput;

    if (userInput == 1) {
        yesterday = &sunnyYesterday;
    } else if (userInput == 2) {
        yesterday = &rainyYesterday;
    } else if (userInput == 3) {
        yesterday = &cloudyYesterday;
    } else {
        cout << "Invalid input. Exiting..." << endl;
        return 0;
    }

    // Call the displayCondition() function for today, tomorrow, and yesterday
    cout << "Weather Report:" << endl;
    cout << "Today: ";
    today->displayCondition();
    cout << "Tomorrow: ";
    tomorrow->displayCondition();
    cout << "Yesterday: ";
    yesterday->displayCondition();

    // Prompt for name and college name
    string name, college;
    cout << endl;
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your college name: ";
    getline(cin, college);

    cout << endl;
    cout << "Name: " << name << endl;
    cout << "College: " << college << endl;

    return 0;
}

