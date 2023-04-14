#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string name1, age1, city1;
    string check1 = "ja";
    cout << "Welkom op de Site! Wat is uw naam?" << endl;
    cin >> name1;
    cout << "Geweldige naam! zou ik ook uw leeftijd mogen?" << endl;
    cin >> age1;
    cout << "Dank u zeer. Ik heb nog 1 ding nodig, en dat is de stad waar u woont." << endl;
    cin >> city1;
    cout << "U bent geweldig! check hieronder even of alles klopt!" << endl;
    cout << name1 << endl;
    cout << age1 << endl;
    cout << city1 << endl;
    cin >> check1;
    cout << "U kunt nu verder op de site!";
}