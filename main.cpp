#include <iostream>
#include <string>
#include <random>

using namespace std;
void randNum();

int main() {
    cout << "type a number to generate a random number between 1 and your number" << endl;
    randNum();
}

void randNum() {

    for ( ; ; ) {
        string userInput;
        cin >> userInput;
        if (userInput == "exit")
            exit(2);
        try {
            int readInput = stoi(userInput);
            random_device rd;
            mt19937 gen(rd());
            uniform_real_distribution<double> dist(1, readInput);
            cout << dist(gen) << endl;
        }
        catch (std::invalid_argument&) {
            cout << "INVALID INPUT" << endl;
        }
    }
}


