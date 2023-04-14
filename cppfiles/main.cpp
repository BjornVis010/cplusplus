#include <iostream>

using namespace std;

int main() {
    cout << "Hello There!" << endl;
    cout << "You probably came to this website because you want to convert fahrenheit  to celsius right?" << endl;
    cout << "well, fill in the fahrenheit temperature here: ";
    double fahrenheit;
    cin >> fahrenheit;
    double celsius;
    double result = floor(fahrenheit);
    cout << "Your temperature in Celsius is: " << (fahrenheit - 32) * .5556 << "°C";
    return 0;
}