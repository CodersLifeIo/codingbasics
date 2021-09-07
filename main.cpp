#include <iostream>
#include <string>

using namespace std;

int main (int argc, char** argv) {
    cout << "Take notes!" << endl;
    cout << "\t\t\t - Drew Knolton, Coder's Life IO" << endl << endl;

    string name;
    int answer;
    float total;

    cout << "What is you name? ";
    cin >> name;

    cout << "What is the answer? ";
    cin >> answer;

    cout << "What is the total cost? ";
    cin >> total;

    cout << fixed;
    cout.precision(2);
    cout << name << " is dropping some knowledge." << endl;
    cout << "Everyone knows that " << answer << " is the answer." << endl;
    cout << "The total sums up to $" << total << " with taxes." << endl;

    int seasons = 6;

    cout << "Have look up the " << seasons + name.length() << " seasons and waiting for the " << "one" << " movie." << endl;

    return 0;
}