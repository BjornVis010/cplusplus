#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <limits>
using namespace std;

int main() {
    int random1, random2;
    int userTotal, computerTotal;

    //get system time
    int seed = time(0);

    //seed into random number generator
    srand(seed);

    random1 = 1 + rand() % 1000;
    random2 = 1 + rand() % 1000;
    cout << "Welcome to this test\n" << "what do you think the answer is?\n";

	computerTotal = random1 + random2;

	// Print the random number x2
	cout << setw(2) << "" << random1 << endl;
    cout << setw(2) << "+" << random2 << endl;
    cout<<"_____"<<endl;
    cin >> userTotal;

    if (userTotal == computerTotal) {
        cout<<"Congratulations! you gave the right answer!";
    } else {
        cout<<"Sorry :( you gave the wrong answer. this was the right answer: "<<computerTotal;
    }

    return 0;
}